#include <stdio.h>

int main()
{
	int taro;
	int rest[6] = { 500, 100, 50, 10, 5, 1 };
	int i = 0;
	int cnt = 0;

	scanf("%d", &taro);

	int money = 1000 - taro;

	while (money != 0)
	{
		if (money - rest[i] >= 0)
		{
			money -= rest[i];
			cnt++;
		}
		else
			i++;
	}

	printf("%d\n", cnt);

	return 0;
}