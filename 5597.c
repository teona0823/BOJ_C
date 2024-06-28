#include <stdio.h>

int main()
{
	int cmp[31], check[31] = { 0 };

	for (int j = 1; j <= 28; j++)
		scanf("%d", &cmp[j]);

	for (int i = 1; i <= 30; i++)
	{
		for (int j = 1; j <= 28; j++)
		{
			if (i == cmp[j])
				check[i] = 1;
		}
	}

	for (int i = 1; i <= 30; i++)
	{
		if (check[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}