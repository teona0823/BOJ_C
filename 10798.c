#include <stdio.h>
#include <string.h>

int main()
{
	char str[5][16] = { 0 };

	for (int i = 0; i < 5; i++)
		scanf("%s", str[i]);

	int max = strlen(str[0]);

	for (int i = 1; i < 5; i++)
	{
		if (max < strlen(str[i]))
			max = strlen(str[i]);
	}

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[j][i] == NULL)
				continue;
			else
				printf("%c", str[j][i]);
		}
	}

	return 0;
}