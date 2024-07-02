#include <stdio.h>

int v[50000];

int main()
{
	int n;
	int max = 0;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);

		if (v[i] > max)
			max = v[i];
	}

	for (int i = 0; i < n; i++)
		sum += v[i];

	printf("%d\n", sum - max);

	return 0;
}