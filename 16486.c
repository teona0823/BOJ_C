#include <stdio.h>
#define pi 3.141592

int main()
{
	int d1, d2;

	scanf("%d%d", &d1, &d2);

	printf("%lf\n", 2 * d1 + 2 * d2 * pi);

	return 0;
}