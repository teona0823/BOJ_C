#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, c;
	char str[10];
	int cnt[10] = { 0 };

	scanf("%d%d%d", &a, &b, &c);

	sprintf(str, "%d", a * b * c);

	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 48; j < 58; j++)
		{
			if (str[i] == j) cnt[j - 48]++;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);

	return 0;
}