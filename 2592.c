#include <stdio.h>

int main()
{
	int num[10];
	int arr[99] = { 0 };
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
		arr[num[i] / 10 - 1]++;
	}

	printf("%d\n", sum / 10);

	int max = 0;
	int maxi = 0;

	for (int i = 0; i < 99; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxi = i;
		}
	}

	printf("%d\n", (maxi + 1) * 10);

	return 0;
}