#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			str[i] -= 32;
	}

	printf("%s\n", str);

	return 0;
}