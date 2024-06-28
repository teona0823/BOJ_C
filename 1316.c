#include <stdio.h>
#include <string.h>

int check(char* str)
{
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] != str[i + 1])
		{
			for (int j = i + 2; j < len; j++)
			{
				if (str[i] == str[j])
					return 0;
			}
		}
	}

	return 1;
}

int main()
{
	int n;
	char str[101];
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		cnt += check(str);
	}

	printf("%d\n", cnt);

	return 0;
}