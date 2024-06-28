#include <stdio.h>

int main()
{
	int n, arr[46];

	scanf("%d", &n);

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < 46; i++)
		arr[i] = arr[i - 2] + arr[i - 1];

	printf("%d", arr[n]);

	return 0;
}