#include <stdio.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2)
{
	int a = *(int*)arg1;
	int b = *(int*)arg2;

	return a - b;
}

int main(void)
{
	int n, m;
	int first, end, mid;
	int flag;

	scanf("%d", &n);
	int* arr1 = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);

	scanf("%d", &m);
	int* arr2 = (int*)malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);

	qsort(arr1, n, sizeof(int), compare);

	for (int i = 0; i < m; i++)
	{
		first = 0, end = n - 1, flag = 0;
		while (first <= end)
		{
			mid = (first + end) / 2;

			if (arr2[i] == arr1[mid])
			{
				flag = 1;
				break;
			}

			else if (arr2[i] < arr1[mid])
				end = mid - 1;

			else if (arr2[i] > arr1[mid])
				first = mid + 1;
		}
		printf("%d\n", flag);
	}

	free(arr1);
	free(arr2);

	return 0;
}