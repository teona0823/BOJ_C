#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];

	gets(s);

	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			s[i] += 13;

		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] -= 13;
	}

	printf("%s\n", s);

	return 0;
}