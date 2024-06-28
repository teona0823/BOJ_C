#include <stdio.h>

int main()
{
	int n, m;
	char w[8][8] = { "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW" };
	char b[8][8] = { "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB" };

	scanf("%d%d", &n, &m);

	char board[51][51] = { 0 };

	for (int i = 0; i < n; i++)
		scanf("%s", board[i]);

	int min = 64;

	for (int i = 0; 8 + i <= n; i++)
	{
		for (int j = 0; 8 + j <= m; j++)
		{
			int wcnt = 0;
			int bcnt = 0;

			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (board[k + i][l + j] != w[k][l]) wcnt++;
					if (board[k + i][l + j] != b[k][l]) bcnt++;
				}
			}

			if (wcnt < min) min = wcnt;
			if (bcnt < min) min = bcnt;
		}
	}

	printf("%d\n", min);

	return 0;
}