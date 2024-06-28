#include <stdio.h>

int check(int a, int b, int c)
{
	if (a >= b + c || b >= a + c || c >= a + b)
		return 0;
	else
		return 1;
}

int main()
{
	int i = 0;
	int side[3];
	int sum = 0;

	while (1)
	{
		scanf("%d%d%d", &side[0], &side[1], &side[2]);
		if (side[0] == 0)
			break;

		if (check(side[0], side[1], side[2]) == 1)
		{
			if (side[0] == side[1] && side[1] == side[2] && side[0] == side[2])
				printf("Equilateral\n");
			else if (side[0] != side[1] && side[1] != side[2] && side[0] != side[2])
				printf("Scalene\n");
			else
				printf("Isosceles\n");
		}
		else
			printf("Invalid\n");
	}

	return 0;
}