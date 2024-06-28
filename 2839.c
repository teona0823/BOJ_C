#include <stdio.h>

int main()
{
	int n;
	int count = 0;
	int check = 0;

	scanf("%d", &n);

	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			if (n == 3 * i + 5 * j) check = 1;
		}
	}

	if (check == 1)
	{
		while (n % 5 != 0)
		{
			n -= 3;
			count++;
		}

		while (n != 0)
		{
			n -= 5;
			count++;
		}
	}
	else count--;

	printf("%d", count);

	return 0;
}