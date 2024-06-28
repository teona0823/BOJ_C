#include <stdio.h>
#include <string.h>

int main()
{
	char str[51];
	int height = 10;

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 1; i < len; i++)
	{
		if (str[i - 1] == str[i])
			height += 5;
		else
			height += 10;
	}

	printf("%d\n", height);

	return 0;
}