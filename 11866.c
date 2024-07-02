#include <stdio.h>

int main(void)
{
	int n, k, i;
	scanf("%d%d", &n, &k);

	int a[1001];
	for (i = 1; i <= n; i++)
		a[i] = 1;

	i = 1;
	int cnt = 0;
	int cntk = 0;

	printf("<");
	while (1)
	{
		if (a[i] == 1) cntk++;
		if (a[i] == 1 && cntk == k)
		{
			cntk = 0;

			a[i] = 0;

			cnt++;
			if (cnt == n)
			{
				printf("%d>", i);
				break;
			}
			printf("%d, ", i);
		}

		i++;

		if (i > n) i = i - n;
	}

	return 0;
}