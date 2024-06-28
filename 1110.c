#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	int a = n / 10;
	int b = n % 10;
	int num = b * 10 + (a + b) % 10;

	int cnt = 1;

	while (num != n)
	{
		a = num / 10;
		b = num % 10;

		num = b * 10 + (a + b) % 10;

		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}