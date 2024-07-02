#include <stdio.h>

int main()
{
	int n, k, i;
	int coin[10];
	int cnt = 0;

	scanf("%d%d", &n, &k);

	for (i = 0; i < n; i++)
		scanf("%d", &coin[i]);

	i = n - 1;

	while (k != 0)
	{
		if (k - coin[i] >= 0)
		{
			k -= coin[i];
			cnt++;
		}
		else
			i--;
	}

	printf("%d\n", cnt);

	return 0;
}