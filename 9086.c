#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	char str[100];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%s", str);

		int len = strlen(str);

		printf("%c%c\n", str[0], str[len - 1]);
	}

	return 0;
}