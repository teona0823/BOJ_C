#include <stdio.h>

int main()
{
	int p[3][2];
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < 3; i++)
		scanf("%d%d", &p[i][0], &p[i][1]);

	for (int i = 0; i < 3; i++)
	{
		sum1 += p[i][0] * p[(i + 1) % 3][1];
		sum2 += p[i][1] * p[(i + 1) % 3][0];
	}

	if (sum1 - sum2 > 0)
		printf("1\n");
	else if (sum1 - sum2 < 0)
		printf("-1\n");
	else
		printf("0\n");

	return 0;
}