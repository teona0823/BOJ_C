#include <stdio.h>
#include <string.h>

int score(char* str)
{
	int res = 0;
	int len = strlen(str);
	int cnt = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'O')
			res += ++cnt;
		else
			cnt = 0;
	}

	return res;
}

int main()
{
	int t;
	char str[81];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%s", str);
		printf("%d\n", score(str));
	}

	return 0;
}