#include <stdio.h>

int main()
{
	int n;
	int a, b, c;

	scanf("%d", &n);

	int cnt = n;

	if (n >= 100 && n < 1000)
	{
		cnt = 99;

		for (int i = 100; i <= n; i++)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;

			if ((a - b) == (b - c)) cnt++;
		}
	}
	else if (n == 1000)
		cnt = 144;

	printf("%d\n", cnt);

	return 0;
}