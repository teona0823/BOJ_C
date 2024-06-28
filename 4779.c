#include <stdio.h>

int power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

void cantor(int i, int n)
{
	if ((i / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("-");
		else
			cantor(i, n / 3);
	}
}

int main()
{
	int n;


	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < power(3, n); i++)
			cantor(i, power(3, n));
		printf("\n");
	}

	return 0;
}