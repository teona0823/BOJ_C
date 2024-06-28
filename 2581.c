#include <stdio.h>
#include <string.h>

int main()
{
	int m, n;
	int sum = 0, check, prime[10000] = { 0 };

	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		int check = 1;
		if (i != 1)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
					check = 0;
			}
			if (check == 1)
			{
				prime[i] = i;
				sum += i;
			}
		}
	}

	if (sum != 0)
	{
		printf("%d\n", sum);
		for (int i = 0; i <= n; i++)
		{
			if (prime[i] != 0)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	else
		printf("-1\n");

	return 0;
}