#include <stdio.h>
#include <string.h>

char s[1000001];

int main()
{
	scanf("%s", s);

	int len = strlen(s);
	int cnt = 1;

	for (int i = 0; i < len - 1; i++)
	{
		if (s[i] != s[i + 1])
			cnt++;
	}

	printf("%d\n", cnt / 2);

	return 0;
}