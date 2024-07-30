#include <stdio.h>

int field[50][50];
int m, n;

void dfs(int x, int y)
{
	field[x][y] = 0;

	if (x + 1 < m && field[x + 1][y]) dfs(x + 1, y);
	if (x - 1 >= 0 && field[x - 1][y]) dfs(x - 1, y);
	if (y + 1 < n && field[x][y + 1]) dfs(x, y + 1);
	if (y - 1 >= 0 && field[x][y - 1]) dfs(x, y - 1);
}

int main()
{
	int t, k;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d%d%d", &m, &n, &k);

		for (int j = 0; j < k; j++)
		{
			int x, y;
			scanf("%d%d", &x, &y);

			field[x][y] = 1;
		}

		int cnt = 0;

		for (int x = 0; x < m; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (field[x][y])
				{
					dfs(x, y);
					cnt++;
				}
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}