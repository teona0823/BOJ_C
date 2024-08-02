#include <stdio.h>

int main()
{
	int n, dp[1001];
	scanf("%d", &n);

	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

	printf("%d\n", dp[n]);

	return 0;
}