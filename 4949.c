#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char stack[101];

	while (1)
	{
		int top = -1;

		gets(str);

		if (strcmp(str, ".") == 0) break;

		int len = strlen(str);

		for (int i = 0; i < len; i++)
		{
			switch (str[i])
			{
			case '(':
			case '[':
				stack[++top] = str[i];
				break;

			case ')':
				if (stack[top] == '(')
					top--;
				else
				{
					i = strlen(str);
					top++;
				}
				break;

			case ']':
				if (stack[top] == '[')
					top--;
				else
				{
					i = strlen(str);
					top++;
				}
				break;
			}
		}

		if (top == -1)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}