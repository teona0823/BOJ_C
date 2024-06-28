#include <stdio.h>

int power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

int digit(int n)
{
	int result = 1;

	while (n / power(10, result) != 0)
		result++;

	return result;
}

int main()
{
	int n;
	int num[5];

	while (1)
	{
		scanf("%d", &n);
		if (n == 0) break;

		else
		{
			if (n < 10) printf("yes\n");
			else
			{
				num[0] = n / power(10, digit(n) - 1);
				for (int i = 1; i < digit(n); i++)
					num[i] = (n % power(10, digit(n) - i)) / power(10, digit(n) - i - 1);

				if (num[0] == num[digit(n) - 1] && num[1] == num[digit(n) - 2]) printf("yes\n");
				else printf("no\n");
			}
		}
	}

	return 0;
}