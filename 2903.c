#include <stdio.h>

int power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

int main()
{
	int n, num = 2;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		num += power(2, i - 1);

	printf("%d", power(num, 2));

	return 0;
}