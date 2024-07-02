#include <stdio.h>

int main()
{
	int a, b;
	int cnt = 1;

	scanf("%d%d", &a, &b);

	while (a < b)
	{
		if (b % 2 == 0)
			b /= 2;
		else if (b % 10 == 1)
			b /= 10;
		else
			break;

		cnt++;
	}

	printf("%d\n", a == b ? cnt : -1);

	return 0;
}