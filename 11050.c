#include <stdio.h>

int main()
{
	int n, k, comb = 1, nf = 1, kf = 1;

	scanf("%d %d", &n, &k);

	if (n >= 1 && n <= 10)
		if (k >= 1 && k <= n)
		{
			for (int i = n - k + 1; i <= n; i++)
				nf = nf * i;

			for (int i = 1; i <= k; i++)
				kf = kf * i;

			comb = nf / kf;
		}

	printf("%d\n", comb);

	return 0;
}