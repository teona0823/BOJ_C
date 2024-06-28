#include <stdio.h>

int power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

int main()
{
	int n;
	scanf("%d", &n);

	int i = 665;
	int cnt = 0;

	while (cnt != n)
	{
		i++;
		for (int j = 0; j < 10; j++)
		{
			if (i / power(10, j) % 1000 == 666)
			{
				cnt++;
				break;
			}
		}
	}

	printf("%d\n", i);

	return 0;
}