#include <stdio.h>
#include <string.h>

int main()
{
	char word[100];

	scanf("%s", &word);
	int len = strlen(word);
	int temp = 0;

	for (int i = 0; i < len / 2; i++)
	{
		if (word[i] == word[len - i - 1])
			temp += 1;
	}

	if (temp == len / 2)
		printf("1");
	else
		printf("0");

	return 0;
}