#include <stdio.h>

int main()
{
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF) break;
		else putchar(ch);
	}

	return 0;
}