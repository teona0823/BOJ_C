#include <stdio.h>

int n, m;
int coord[1001][1001];
int visited[1001];

void dfs(int v)
{
	visited[v] = 1;

	for (int i = 1; i <= n; i++)
	{
		if (coord[v][i] && !visited[i])
			dfs(i);
	}
}

int main()
{
	scanf("%d%d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);

		coord[u][v] = 1;
		coord[v][u] = 1;
	}

	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			dfs(i);
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}