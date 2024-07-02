#include <stdio.h>

int main()
{
	char s[1001];
	int i;

	scanf("%s%d", s, &i);
	printf("%c", s[i - 1]);

	return 0;
}