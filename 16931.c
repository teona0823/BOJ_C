#include <stdio.h>

int main()
{
	int n, m;
	int num[101][101] = { 0 };

	scanf("%d%d", &n, &m);

	int sum = n * m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &num[i][j]);

			if (num[i][j] > num[i][j - 1])
				sum += num[i][j] - num[i][j - 1];

			if (num[i][j] > num[i - 1][j])
				sum += num[i][j] - num[i - 1][j];
		}
	}

	printf("%d\n", sum * 2);

	return 0;
}