#include <stdio.h>

int main()
{
	int num[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
	}

	int num_max = num[0];
	int i_max = 1;

	for (int i = 0; i < 9; i++)
	{
		if (num_max < num[i])
		{
			num_max = num[i];
			i_max = i + 1;
		}
	}

	printf("%d\n%d\n", num_max, i_max);

	return 0;
}
