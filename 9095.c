#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);

	int dp[10] = { 0 };
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;

	for (int i = 3; i < 10; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%d\n", dp[n - 1]);
	}

	return 0;
}