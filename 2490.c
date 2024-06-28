#include <stdio.h>

int main()
{
	int yut[4];

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;

		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &yut[i]);
			sum += yut[i];
		}

		switch (sum)
		{
		case 1:
			printf("C\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("A\n");
			break;
		case 4:
			printf("E\n");
			break;
		default:
			printf("D\n");
			break;
		}
	}

	return 0;
}