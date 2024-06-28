#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		long long number;
		scanf("%lld", &number);

		if (number == 0 || number == 1 || number == 2)
		{
			printf("%d\n", 2);
			continue;
		}

		while (1)
		{
			int result = 0;
			for (long long j = 2; j <= sqrt((double)number) + 1; j++)
			{
				if (number % j == 0)
				{
					result++;
					break;
				}
			}

			if (result == 0)
			{
				printf("%lld\n", number);
				break;
			}

			number++;
		}

	}

	return 0;
}