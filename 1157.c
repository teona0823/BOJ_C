#include <stdio.h>
#include <string.h>

int main()
{
	int num[26] = { 0 };
	char word[1000000];

	scanf("%s", word);

	int len = strlen(word);

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (word[i] == j + 65 || word[i] == j + 97)
				num[j]++;
		}
	}

	int max = num[0];
	int maxi = 0;

	for (int i = 1; i < 26; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			maxi = i;
		}
	}

	int check = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max == num[i])
			check++;
	}

	if (check == 1) printf("%c", maxi + 65);
	else printf("?");

	return 0;
}