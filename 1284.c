#include <stdio.h>
#include <string.h>

int main()
{
	char num[5];

	while (1)
	{
		int sum = 0;

		scanf("%s", num);

		if (num[0] == '0')
			break;

		int len = strlen(num);

		for (int i = 0; i < len; i++)
		{
			if (num[i] == '1') sum += 2;
			else if (num[i] == '0') sum += 4;
			else sum += 3;
		}

		sum += len + 1;

		printf("%d\n", sum);
	}

	return 0;
}