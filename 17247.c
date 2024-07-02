#include <stdio.h>

int num[1000][1000];

int abs(int n)
{
	if (n >= 0) return n;
	else return -n;
}

int distance(int a, int b, int c, int d)
{
	int x = abs(a - c);
	int y = abs(b - d);

	return x + y;
}

int main()
{
	int n, m;
	int a[2], b[2];
	int cnt = 0;

	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &num[i][j]);

			if (num[i][j] == 1)
			{
				a[cnt] = i;
				b[cnt] = j;

				cnt++;
			}
		}
	}

	printf("%d\n", distance(a[0], b[0], a[1], b[1]));

	return 0;
}