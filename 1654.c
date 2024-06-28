#include <stdio.h>

long long int len[10000];

int main()
{
	int k, n;
	long long int max = 0;
	long long int min = 1;

	scanf("%d%d", &k, &n);

	for (int i = 0; i < k; i++)
	{
		scanf("%lld", &len[i]);

		if (max < len[i])
			max = len[i];
	}

	while (min <= max)
	{
		long long int x = 0;
		long long int cut = (min + max) / 2;

		for (int i = 0; i < k; i++)
			x += len[i] / cut;

		if (x >= n)
			min = cut + 1;
		else
			max = cut - 1;
	}

	printf("%lld\n", max);

	return 0;
}