#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int place[26];

	scanf("%s", str);

	for (int i = 0; i < 26; i++)
		place[i] = -1;

	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == i)
			{
				place[i - 97] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", place[i]);

	return 0;
}