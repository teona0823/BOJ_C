#include <stdio.h>

int main()
{
	char str[256];

	while (1)
	{
		int cnt = 0;

		gets(str);

		if (str[0] == '#')
			break;

		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				cnt++;

			else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
				cnt++;
		}

		printf("%d\n", cnt);
	}

	return 0;
}