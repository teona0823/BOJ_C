#include <stdio.h>

int a[1000000];

int main()
{
	int n, b, c;
	long long int res = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d%d", &b, &c);

	for (int i = 0; i < n; i++)
	{
		a[i] = a[i] - b;
		res++;

		if (a[i] > 0)
		{
			res += a[i] / c;

			if (a[i] % c > 0)
				res++;
		}
	}

	printf("%lld\n", res);

	return 0;
}