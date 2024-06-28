#include <stdio.h>
#include <string.h>

int power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

int main()
{
	char n[101];
	int b;
	int result = 0;

	scanf("%s %d", n, &b);

	int len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		if (n[len - (i + 1)] <= 57)
			n[len - (i + 1)] -= 48;

		else
			n[len - (i + 1)] -= 55;

		result += power(b, i) * n[len - (i + 1)];
	}

	printf("%d\n", result);

	return 0;
}