#include <stdio.h>

int gcd(int a, int b)
{
	int temp;

	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		temp = a;
		a = b;
		b = temp % b;
	}

	return a;
}

int main()
{
	int a, b, c, d;

	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);

	int numer = a * d + b * c;
	int deno = b * d;

	printf("%d %d\n", numer / gcd(numer, deno), deno / gcd(numer, deno));

	return 0;
}