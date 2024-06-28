#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	scanf("%s", str);

	int count = strlen(str);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '-' || str[i] == '=')
			count--;
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
			count--;
		else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')
			count--;
	}

	printf("%d", count);

	return 0;
}