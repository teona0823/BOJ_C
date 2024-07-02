#include <stdio.h>

int cnt[20000001];
int find[500000];

int main()
{
	int n, m;
	int k;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		cnt[k + 10000000]++;
	}

	scanf("%d", &m);

	for (int i = 0; i < m; i++)
		scanf("%d", &find[i]);

	for (int i = 0; i < m; i++)
		printf("%d ", cnt[find[i] + 10000000]);

	return 0;
}