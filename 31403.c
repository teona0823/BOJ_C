#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[5], b[5], c[5];

	scanf("%s%s%s", a, b, c);

	printf("%d\n", atoi(a) + atoi(b) - atoi(c));
	printf("%d\n", atoi(strcat(a, b)) - atoi(c));

	return 0;
}