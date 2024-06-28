#include <stdio.h>

void star(int x, int y, int n)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
			star(x, y, n / 3);
	}
}

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			star(i, j, n);
		printf("\n");
	}

	return 0;
}