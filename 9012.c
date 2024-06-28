#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	char str[51];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int num = 0;

		scanf("%s", str);

		int len = strlen(str);

		for (int j = 0; j < len; j++)
		{
			if (str[j] == '(')
				num++;
			else
				num--;

			if (num < 0)
				break;
		}

		if (num == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}