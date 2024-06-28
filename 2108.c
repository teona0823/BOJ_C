#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int mode(int list[], int n)
{
	int num[8001] = { 0 };
	int idx, max = 0, cnt = 0;

	for (int i = 0; i < n; i++)
	{
		idx = 4000 + list[i];
		num[idx]++;

		if (max < num[idx])
			max = num[idx];
	}

	for (int i = 0; i < 8001; i++)
	{
		if (num[i] == 0)
			continue;

		if (num[i] == max)
		{
			if (cnt == 0)
			{
				idx = i;
				cnt++;
			}
			else if (cnt == 1)
			{
				idx = i;
				break;
			}
		}
	}

	return idx - 4000;
}

int arr[500000];

int main()
{
	int n;
	double sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

		sum += arr[i];
	}

	qsort(arr, n, sizeof(int), compare);

	if (sum / n < 0 && sum / n > -0.5)
		printf("%.0lf\n", -sum / n);
	else
		printf("%.0lf\n", sum / n);

	printf("%d\n", arr[n / 2]);
	printf("%d\n", mode(arr, n));
	printf("%d\n", arr[n - 1] - arr[0]);

	return 0;
}