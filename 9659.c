#include <stdio.h>
#include <string.h>

int main()
{
	char n[14];
	scanf("%s", &n);

	int len = strlen(n) - 1;

	if (n[len] == '1' || n[len] == '3' || n[len] == '5' || n[len] == '7' || n[len] == '9')
		printf("SK\n");
	else
		printf("CY\n");

	return 0;
}