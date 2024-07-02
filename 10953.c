#include <stdio.h>

int main()
{
	int t;
	int a, b;
	char comma;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d%c%d", &a, &comma, &b);
		printf("%d\n", a + b);
	}

	return 0;
}