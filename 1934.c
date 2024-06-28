#include <stdio.h>

int main()
{
	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d%d", &a, &b);
		for (int j = 1; j <= b; j++)
		{
			if ((a * j) % b == 0)
			{
				printf("%d\n", a * j);
				break;
			}
		}
	}

	return 0;
}