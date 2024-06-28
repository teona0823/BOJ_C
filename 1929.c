#include <stdio.h>

int prime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int m, n, sum = 0, s = 0;

	scanf("%d %d", &m, &n);

	if (m == 1) m = 2;

	for (int i = m; i <= n; i++)
	{
		if (prime(i) == 1) printf("%d\n", i);
	}

	return 0;
}