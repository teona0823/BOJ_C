#include <stdio.h>

int main()
{
	int score[5][4];
	int sum[5] = { 0 };
	int max = 0;
	int maxi = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
			sum[i] += score[i][j];
		}

		if (sum[i] > max)
		{
			max = sum[i];
			maxi = i + 1;
		}
	}

	printf("%d %d\n", maxi, max);

	return 0;
}