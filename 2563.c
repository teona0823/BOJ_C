#include <stdio.h>

int main()
{
	int x, y;
	int plane[101][101];
	int num;
	int scale = 0;

	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
			plane[i][j] = 0;
	}

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d%d", &x, &y);

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
				plane[j][k] = 1;
		}
	}

	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
			if (plane[i][j] == 1) scale++;
	}

	printf("%d", scale);

	return 0;
}