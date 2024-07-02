#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if (n % 2 == 0)
		printf("Duck\n");
	else
		printf("Goose\n");

	return 0;
}