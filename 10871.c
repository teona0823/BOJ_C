#include <stdio.h>

int main()
{
	int n, x, num = 0;

	scanf("%d %d", &n, &x);

	int arr[10001];

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}

	return 0;
}