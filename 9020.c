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

int main()
{
	int t, n;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);

		for (int j = n / 2; j > 1; j--)
		{
			if (prime(j) && prime(n - j))
			{
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}

	return 0;
}