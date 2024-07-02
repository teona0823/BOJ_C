#include <stdio.h>

int main()
{
	int c, b;
	double result;

	scanf("%d%d", &c, &b);

	result = (double)c / (double)b;

	printf("%lf\n", result);

	return 0;
}