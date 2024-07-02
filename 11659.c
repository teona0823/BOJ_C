#include <stdio.h>

int main()
{
	int m, n;
	int num[100000];
	int i, j;

	scanf("%d%d", &n, &m);

	for (int k = 1; k <= n; k++)
	{
		scanf("%d", &num[k]);
		num[k] += num[k - 1];
	}

	for (int k = 0; k < m; k++)
	{
		scanf("%d%d", &i, &j);

		printf("%d\n", num[j] - num[i - 1]);
	}

	return 0;
}