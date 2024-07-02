#include <stdio.h>

void swap(long long int* a, long long int* b)
{
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(long long int* arr)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

int main()
{
	int t;
	long long int num[3];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%lld", &num[j]);

		sort(num);

		printf("%lld\n", num[2] * num[2] + (num[0] + num[1]) * (num[0] + num[1]));
	}

	return 0;
}