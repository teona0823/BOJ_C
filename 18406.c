#include <stdio.h>
#include <string.h>

int main()
{
	char n[9];
	int a = 0;
	int b = 0;

	scanf("%s", n);

	int len = strlen(n);

	for (int i = 0; i < len / 2; i++)
		a += n[i] - 48;

	for (int i = len / 2; i < len; i++)
		b += n[i] - 48;

	if (a == b)
		printf("LUCKY\n");
	else
		printf("READY\n");

	return 0;
}