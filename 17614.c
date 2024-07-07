#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int clap(char str[])
{
	int res = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '3' || str[i] == '6' || str[i] == '9')
			res++;
	}

	return res;
}

int main()
{
	int n;
	scanf("%d", &n);

	char str[8];
	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		snprintf(str, sizeof(str), "%d", i);
		cnt += clap(str);
	}

	printf("%d\n", cnt);

	return 0;
}