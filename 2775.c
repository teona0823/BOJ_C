#include <stdio.h>

int main()
{
	int t, k, n;
	int arr[15][15] = { 0 };

	scanf("%d", &t);

	for (int i = 1; i <= 14; i++)
		arr[0][i] = i;

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &k, &n);

		for (int y = 1; y <= k; y++)
		{
			for (int x = 1; x <= n; x++)
			{
				if (arr[y][x]) continue;

				for (int j = 1; j <= x; j++)
					arr[y][x] += arr[y - 1][j];
			}
		}
		printf("%d\n", arr[k][n]);
	}

	return 0;
}