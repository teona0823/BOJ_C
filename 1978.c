#include <stdio.h>

int main()
{
	int n, num, primenum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		if (num != 1)
		{
			int primecheck = 1;

			for (int j = 2; j < num; j++)
			{
				if (num % j == 0)
					primecheck = 0;
			}

			if (primecheck == 1)
				primenum += 1;
		}
		else
			continue;
	}

	printf("%d\n", primenum);

	return 0;
}