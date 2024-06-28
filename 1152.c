#include <stdio.h>
#include <string.h>

int main()
{
	int i, num = 1;
	char word[1000000];

	scanf("%[^\n]s", word);
	int len = strlen(word);

	for (i = 0; i < len; i++)
	{
		if (word[i] == 32)
			num++;
	}

	if (word[0] == 32)
		num--;

	if (word[len - 1] == 32)
		num--;

	printf("%d", num);

	return 0;
}