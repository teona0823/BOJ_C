#include <stdio.h>

int n, m;
int arr[9];
int visited[9];

void back(int idx)
{
	if (idx == m)
	{
		for (int i = 0; i < m; i++)
			printf("%d ", arr[i]);

		printf("\n");

		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == 0)
		{
			arr[idx] = i;
			visited[i] = 1;

			back(idx + 1);

			visited[i] = 0;
		}
	}
}

int main()
{
	scanf("%d%d", &n, &m);

	back(0);

	return 0;
}