#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int* arr)
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
	int n;
	int num[3];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d", &num[j]);

		sort(num);

		printf("Scenario #%d:\n", i + 1);
		if (num[2] * num[2] == num[0] * num[0] + num[1] * num[1])
			printf("yes\n\n");
		else
			printf("no\n\n");
	}

	return 0;
}