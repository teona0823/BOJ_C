#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int search(int arr[], int s, int n)
{
	int l = 0, r = n - 1;

	while (l <= r)
	{
		int m = (l + r) / 2;
		if (s == arr[m])
			return 1;

		else if (s > arr[m])
			l = m + 1;
		else
			r = m - 1;
	}

	return 0;
}

int main()
{
	int n, m;
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
		printf("%d ", search(arr1, arr2[i], n));

	free(arr1);
	free(arr2);

	return 0;
}