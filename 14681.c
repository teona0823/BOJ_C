#include <stdio.h>

int main()
{
	int x, y, quad;

	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0)
		quad = 1;
	else if (x < 0 && y > 0)
		quad = 2;
	else if (x < 0 && y < 0)
		quad = 3;
	else if (x > 0 && y < 0)
		quad = 4;

	printf("%d", quad);

	return 0;
}