#include <stdio.h>

int dp[50001];

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;

		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}

	printf("%d\n", dp[n]);

	return 0;
}