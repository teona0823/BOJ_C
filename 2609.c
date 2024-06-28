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

int lcm(int a, int b)
{
	if (a < b)
	{
		for (int i = 1; i <= b; i++)
		{
			if ((a * i) % b == 0)
				return a * i;
		}
	}
	else
	{
		for (int i = 1; i <= b; i++)
		{
			if ((b * i) % a == 0)
				return b * i;
		}
	}
}

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	printf("%d\n%d\n", gcd(a, b), lcm(a, b));

	return 0;
}