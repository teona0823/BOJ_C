#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];

	gets(str);

	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'D' && str[i] <= 'Z')
			str[i] -= 3;

		else if (str[i] >= 'A' && str[i] <= 'C')
			str[i] += 23;
	}

	printf("%s\n", str);

	return 0;
}