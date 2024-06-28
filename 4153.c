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
	int num[3];

	while (1)
	{
		for (int i = 0; i < 3; i++)
			scanf("%d", &num[i]);

		if (num[0] + num[1] + num[2] == 0) break;

		sort(num);

		if (num[2] * num[2] == num[0] * num[0] + num[1] * num[1]) printf("right\n");
		else printf("wrong\n");
	}

	return 0;
}