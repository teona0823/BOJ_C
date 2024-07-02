#include <stdio.h>
#include <string.h>

char s[10000][501];
char str[10000][501];

int main()
{
	int n, m;
	int cnt = 0;

	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%s", s[i]);

	for (int i = 0; i < m; i++)
	{
		scanf("%s", str[i]);
		for (int j = 0; j < m; j++)
		{
			if (strcmp(str[i], s[j]) == 0)
				cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}