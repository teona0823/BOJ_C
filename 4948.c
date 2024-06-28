#include <stdio.h>

int prime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}

	return 1;
}

int count(int n)
{
	int cnt = 0;

	for (int i = n + 1; i <= 2 * n; i++)
	{
		if (prime(i))
			cnt++;
	}

	return cnt;
}

int main()
{
	int n;

	while (1)
	{
		scanf("%d", &n);

		if (n == 0)
			break;

		printf("%d\n", count(n));
	}

	return 0;
}