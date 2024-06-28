#include <stdio.h>
#define pi 3.14159265358979

int main()
{
	double r;

	scanf("%lf", &r);

	printf("%lf\n", r * r * pi);
	printf("%lf\n", r * r * 2);

	return 0;
}