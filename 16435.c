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
	int n, l;
	int h[1000];

	scanf("%d%d", &n, &l);

	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);

	sort(h, n);

	for (int i = 0; i < n; i++)
	{
		if (l >= h[i])
			l++;
	}

	printf("%d\n", l);

	return 0;
}