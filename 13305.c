#include <stdio.h>

long long int dist[99999];
long long int price[100000];

int  main()
{
	int n;
	long long int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n - 1; i++)
		scanf("%lld", &dist[i]);

	for (int i = 0; i < n; i++)
		scanf("%lld", &price[i]);

	long long int min = price[0];

	for (int i = 0; i < n - 1; i++)
	{
		if (min > price[i])
			min = price[i];

		sum += min * dist[i];
	}

	printf("%lld\n", sum);

	return 0;
}