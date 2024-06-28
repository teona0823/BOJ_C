#include <stdio.h>

int main()
{
	int max, dice[3];
	scanf("%d%d%d", &dice[0], &dice[1], &dice[2]);

	if (dice[0] == dice[1] && dice[1] == dice[2]) printf("%d", 10000 + dice[0] * 1000);
	else if (dice[0] == dice[1]) printf("%d", 1000 + dice[0] * 100);
	else if (dice[1] == dice[2]) printf("%d", 1000 + dice[1] * 100);
	else if (dice[0] == dice[2]) printf("%d", 1000 + dice[0] * 100);
	else
	{
		max = dice[0];
		for (int i = 1; i < 3; i++)
		{
			if (max < dice[i])
				max = dice[i];
		}
		printf("%d", max * 100);
	}

	return 0;
}