#include <stdio.h>
#include <string.h>

int graph[1001][1001];
int visited[1001];
int queue[1001];

void dfs(int n, int v)
{
	visited[v] = 1;
	printf("%d ", v);

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i] && graph[v][i])
			dfs(n, i);
	}
}

void bfs(int n, int v)
{
	int l = -1;
	int r = -1;
	int pop;

	visited[v] = 1;
	printf("%d ", v);
	queue[++r] = v;

	while (l < r)
	{
		pop = queue[++l];

		for (int i = 1; i <= n; i++)
		{
			if (!visited[i] && graph[pop][i])
			{
				visited[i] = 1;
				printf("%d ", i);
				queue[++r] = i;
			}
		}
	}
}

int main()
{
	int n, m, v;
	scanf("%d%d%d", &n, &m, &v);

	for (int i = 0; i < m; i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);

		graph[x][y] = 1;
		graph[y][x] = 1;
	}

	dfs(n, v);
	printf("\n");

	memset(visited, 0, sizeof(int) * (n + 1));

	bfs(n, v);
	printf("\n");

	return 0;
}