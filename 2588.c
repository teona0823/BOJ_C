#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[4], b[4];

	scanf("%s%s", a, b);

	printf("%d\n", atoi(a) * (b[2] - '0'));
	printf("%d\n", atoi(a) * (b[1] - '0'));
	printf("%d\n", atoi(a) * (b[0] - '0'));
	printf("%d\n", atoi(a) * atoi(b));

	return 0;
}