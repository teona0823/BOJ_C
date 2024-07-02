#include <stdio.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main()
{
	int n, m;
	char c;

	scanf("%d%c%d", &n, &c, &m);

	printf("%d:%d\n", n / gcd(n, m), m / gcd(n, m));

	return 0;
}