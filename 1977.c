#include <stdio.h>

int main()
{
	int m, n;

	scanf("%d", &m);
	scanf("%d", &n);

	int sum = 0;

	for (int i = 0; i * i <= n; i++)
	{
		if (i * i >= m)
			sum += i * i;
	}

	if (sum == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", sum);
		for (int i = 0; i * i <= n; i++)
		{
			if (i * i >= m)
			{
				printf("%d\n", i * i);
				break;
			}
		}
	}

	return 0;
}