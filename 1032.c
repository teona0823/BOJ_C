#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char str[50][51];
	int value[50];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", str[i]);

	for (int i = 0; i < strlen(str[0]); i++)
	{
		value[i] = 1;
		for (int j = 1; j < n; j++)
		{
			if (str[0][i] != str[j][i])
				value[i] = 0;
		}
	}

	for (int i = 0; i < strlen(str[0]); i++)
	{
		if (value[i] == 1)
			printf("%c", str[0][i]);
		else
			printf("?");
	}

	return 0;
}