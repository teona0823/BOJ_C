#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	double result = (double)(a * c) / (double)b;

	printf("%lf\n", result);

	return 0;
}