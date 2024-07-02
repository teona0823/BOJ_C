#include <stdio.h>

void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
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
	int n;
	int p[1000];
	int s[1000] = { 0 };
	int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);

	sort(p, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			s[i] += p[j];
		sum += s[i];
	}

	printf("%d\n", sum);

	return 0;
}