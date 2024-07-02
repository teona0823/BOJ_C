#include <stdio.h>

int fact(int k);

int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld", fact(n));

	return 0;
}

int fact(int k)
{
	int i;
	long long int result = 1;

	if (k != 0)
	{
		for (i = 1; i <= k; i++)
			result *= i;
	}

	return result;
}