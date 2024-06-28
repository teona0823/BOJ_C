#include <stdio.h>
#include <string.h>

int plma(int n)
{
	return -2 * n + 1;
}

int main()
{
	char str[51];
	int num = 0;
	int sum = 0;
	int minus = 0;

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= '0')
		{
			int temp = str[i] - '0';
			num = num * 10 + temp;
		}

		else if (str[i] == '-' && minus == 0)
		{
			sum += num;
			num = 0;

			minus = 1;
		}

		if (str[i] < '0' || i == len - 1)
		{
			sum += plma(minus) * num;
			num = 0;
		}
	}

	printf("%d\n", sum);

	return 0;
}