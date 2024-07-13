#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char hear[500000][21];
char see[500000][21];
char hns[500000][21];

int compare(char* str1, char* str2)
{
	return strcmp(str1, str2);
}

int search(char str[][21], char s[], int n)
{
	int l = 0, r = n - 1;

	while (l <= r)
	{
		int m = (l + r) / 2;
		if (strcmp(s, str[m]) == 0)
			return 1;

		else if (strcmp(s, str[m]) > 0)
			l = m + 1;
		else
			r = m - 1;
	}

	return 0;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%s", hear[i]);

	for (int i = 0; i < m; i++)
		scanf("%s", see[i]);

	qsort(hear, n, sizeof(hear[0]), compare);
	qsort(see, m, sizeof(see[0]), compare);

	int cnt = 0;

	for (int i = 0; i < m; i++)
	{
		if (search(hear, see[i], n))
			strcpy(hns[cnt++], see[i]);
	}

	printf("%d\n", cnt);

	for (int i = 0; i < cnt; i++)
		printf("%s\n", hns[i]);

	return 0;
}