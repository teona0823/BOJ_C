#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[8], b[8], c[8], d[8];

	scanf("%s%s%s%s", a, b, c, d);

	long long int n1 = atoll(strcat(a, b));
	long long int n2 = atoll(strcat(c, d));

	printf("%lld\n", n1 + n2);

	return 0;
}