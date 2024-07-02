#include <stdio.h>

void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n, k;
	int x[1000];

	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);

	sort(x, n);

	printf("%d\n", x[k - 1]);

	return 0;
}