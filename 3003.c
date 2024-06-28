#include <stdio.h>

int main()
{
	int dong[6];
	int chess[6] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &dong[i]);
		printf("%d ", chess[i] - dong[i]);
	}

	return 0;
}