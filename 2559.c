#include <stdio.h>

int sum[100001];
int ret = -2147483647;

int max(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int main()
{
	int n, k;
	int temp;

	scanf("%d%d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		sum[i] = sum[i - 1] + temp;
	}

	for (int i = k; i <= n; i++)
		ret = max(ret, (sum[i] - sum[i - k]));

	printf("%d\n", ret);

	return 0;
}