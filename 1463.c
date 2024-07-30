#include <stdio.h>

int min(int a, int b)
{
	return a < b ? a : b;
}

int arr[1000001];

int main()
{
	int x;
	scanf("%d", &x);

	for (int i = 2; i <= x; i++)
	{
		arr[i] = arr[i - 1] + 1;

		if (i % 3 == 0)
			arr[i] = min(arr[i], arr[i / 3] + 1);
		if (i % 2 == 0)
			arr[i] = min(arr[i], arr[i / 2] + 1);
	}

	printf("%d\n", arr[x]);

	return 0;
}