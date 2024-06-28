#include <stdio.h>

int main()
{
	int stick = 64;
	int sum = 0;
	int x;
	int cnt = 1;

	scanf("%d", &x);

	if (x != 64)
	{
		while (stick > x)
			stick /= 2;

		sum += stick;

		while (sum != x)
		{
			stick /= 2;
			if (sum + stick <= x)
			{
				sum += stick;
				cnt++;
			}
		}
	}

	printf("%d\n", cnt);

	return 0;
}