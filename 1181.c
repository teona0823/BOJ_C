#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int compare(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
		return strlen(str1) - strlen(str2);

	else
		return strcmp(str1, str2);
}

int main(void)
{
	int n;
	char str[20000][51];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", str[i]);

	qsort(str, n, sizeof(str[0]), compare);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(str[i], str[i + 1]) != 0)
			printf("%s\n", str[i]);
	}

	return 0;
}