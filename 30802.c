#include <stdio.h>

int main()
{
	int n, t, p;
	int size[6];

	scanf("%d", &n);

	for (int i = 0; i < 6; i++)
		scanf("%d", &size[i]);

	scanf("%d%d", &t, &p);

	int cnt = 0;

	for (int i = 0; i < 6; i++)
		cnt += size[i] / t + (size[i] % t > 0);

	printf("%d\n", cnt);
	printf("%d %d\n", n / p, n % p);

	return 0;
}