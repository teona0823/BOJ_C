#include <stdio.h>

int main()
{
	int n, k, count = 0;
	int factor[10000];

	scanf("%d%d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) factor[count++] = i;
	}

	if (factor[k - 1] <= n && factor[k - 1] >= 1) printf("%d", factor[k - 1]);
	else printf("0");

	return 0;
}