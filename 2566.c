#include <stdio.h>

int main()
{
	int ary[9][9];
	int x = 1, y = 1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			scanf("%d", &ary[i][j]);
	}

	int max = ary[0][0];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max < ary[i][j])
			{
				max = ary[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	printf("%d\n%d %d", max, x, y);

	return 0;
}