#include <stdio.h>

int func(int a, int b, int c)
{
	if (b > 1)
	{
		long long int res = func(a, b / 2, c);

		if (b % 2)
			return (((res * res) % c) * a) % c;

		else
			return (res * res) % c;
	}
	else
		return a;
}

int main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	int res = func(a % c, b, c);

	printf("%d\n", res);

	return 0;
}