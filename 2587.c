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
	int num[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}

	sort(num, 5);

	printf("%d\n", sum / 5);
	printf("%d\n", num[2]);

	return 0;
}