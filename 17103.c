#include <stdio.h>

int num[1000001];

int main(void)
{
	for (int i = 2; i <= 1000000; i++)
		num[i] = i;

	for (int i = 2; i <= 1000000; i++)
	{
		for (int j = 2; j * i <= 1000000; j++)
			num[i * j] = 0;
	}

	int t, n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int cnt = 0;
		scanf("%d", &n);

		for (int i = 2; i < n; i++)
		{
			if (num[i] + num[n - i] == n)
			{
				cnt++;

				if (n - i == i)
					cnt++;
			}

		}

		printf("%d\n", cnt / 2);
	}

	return 0;
}