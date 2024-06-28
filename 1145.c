#include <stdio.h>

int check(int n, int arr[])
{
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		if (n % arr[i] == 0)
			cnt++;
	}

	return cnt;
}

int main()
{
	int arr[5];
	int n = 1;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	while (check(n, arr) < 3)
		n++;

	printf("%d\n", n);

	return 0;
}