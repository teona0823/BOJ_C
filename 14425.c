#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[10000][501];
char str[10000][501];

int compare(char* str1, char* str2)
{
	return strcmp(str1, str2);
}

int search(char str[][501], char s[], int n)
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
		scanf("%s", s[i]);

	for (int i = 0; i < m; i++)
		scanf("%s", str[i]);

	qsort(s, n, sizeof(s[0]), compare);
	qsort(str, m, sizeof(str[0]), compare);

	int cnt = 0;

	for (int i = 0; i < m; i++)
	{
		if (search(s, str[i], n))
			cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}