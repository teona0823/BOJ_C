#include <stdio.h>

int num[1000000];

int main()
{
	int n, min, max;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	min = num[0];
	for (int i = 0; i < n; i++)
	{
		if (min > num[i])
			min = num[i];
	}

	max = num[0];
	for (int i = 0; i < n; i++)
	{
		if (max < num[i])
			max = num[i];
	}

	printf("%d %d\n", min, max);

	return 0;
}
