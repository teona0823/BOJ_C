#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	while (a >= b + c || b >= a + c || c >= a + b)
	{
		if (a >= b + c) a--;
		if (b >= a + c) b--;
		if (c >= a + b) c--;
	}

	printf("%d", a + b + c);

	return 0;
}