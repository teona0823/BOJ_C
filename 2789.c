#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char cam[] = "CAMBRIDGE";

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
	{
		int check = 1;

		for (int j = 0; j < 9; j++)
		{
			if (str[i] == cam[j])
				check = 0;
		}

		if (check)
			printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}