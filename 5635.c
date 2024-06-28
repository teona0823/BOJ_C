#include <stdio.h>

int mi(int arr[], int n)
{
	int min = arr[0];
	int mini = 0;

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			mini = i;
		}
	}

	return mini;
}

int Mi(int arr[], int n)
{
	int max = arr[0];
	int maxi = 0;

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxi = i;
		}
	}

	return maxi;
}

int main()
{
	int n;
	char name[100][16];
	int d[100], m[100], y[100];
	int birth[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s%d%d%d", name[i], &d[i], &m[i], &y[i]);
		birth[i] = y[i] * 10000 + m[i] * 100 + d[i];
	}

	printf("%s\n", name[Mi(birth, n)]);
	printf("%s\n", name[mi(birth, n)]);

	return 0;
}