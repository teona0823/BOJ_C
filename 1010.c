#include <stdio.h>

long long int comb(int n, int r)
{
	long long int result = 1;

	if (r <= n - r)
	{
		for (int i = n; i >= n - r + 1; i--)
			result *= i;

		for (int i = 1; i <= r; i++)
			result /= i;
	}
	else
	{
		for (int i = n; i >= r + 1; i--)
			result *= i;

		for (int i = 1; i <= n - r; i++)
			result /= i;
	}

	return result;
}

int main()
{
	int t;
	int n, m;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d%d", &n, &m);
		printf("%d\n", comb(m, n));
	}

	return 0;
}