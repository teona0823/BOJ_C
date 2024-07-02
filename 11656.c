#include <stdio.h>
#include <string.h>

void sort(char str[][1001], int n)
{
	char temp[1001];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (strcmp(str[j], str[j + 1]) > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], temp);
			}
		}
	}
}

int main()
{
	char s[1001];
	char str[1000][1001];

	scanf("%s", s);

	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			int k;
			for (k = i; k <= j; k++)
				str[i][k - i] = s[k];

			str[i][k - i] = '\0';
		}
	}

	sort(str, len);

	for (int i = 0; i < len; i++)
		printf("%s\n", str[i]);

	return 0;
}