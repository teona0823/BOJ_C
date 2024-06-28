#include <stdio.h>

int main()
{
	int n, m;
	int board[100][100];
	int x[2], y[2];
	int sum = 0;

	scanf("%d%d", &n, &m);

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			board[i][j] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &x[0], &y[0], &x[1], &y[1]);

		for (int j = x[0] - 1; j < x[1]; j++)
		{
			for (int k = y[0] - 1; k < y[1]; k++)
				board[j][k] += 1;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (board[i][j] > m)
				sum++;
		}
	}

	printf("%d\n", sum);

	return 0;
}