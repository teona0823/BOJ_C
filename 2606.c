#include <stdio.h>

int com[101][101];
int visited[101];
int res;

void dfs(int start, int n)
{
	if (visited[start])
		return;

	visited[start] = 1;

	for (int i = 1; i <= n; i++)
	{
		if (com[start][i] && !visited[i])
		{
			res++;
			dfs(i, n);
		}
	}
}

int main()
{
	int n, net;
	scanf("%d%d", &n, &net);

	for (int i = 0; i < net; i++)
	{
		int from, to;
		scanf("%d%d", &from, &to);

		com[from][to] = 1;
		com[to][from] = 1;
	}

	dfs(1, n);

	printf("%d\n", res);

	return 0;
}