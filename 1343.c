#include <stdio.h>
#include <string.h>

int check(char* s, int length, int start, int size)
{
	if (start + size > length)
		return 0;

	for (int i = 0; i < size; i++)
	{
		if (s[start + i] != 'X')
			return 0;
	}

	return 1;
}

int main()
{
	char board[51];
	scanf("%s", board);

	int len = strlen(board);

	for (int i = 0; i < len; i++)
	{
		if (board[i] == 'X' && check(board, len, i, 4))
		{
			for (int j = 0; j < 4; j++)
				board[i + j] = 'A';
		}
	}

	for (int i = 0; i < len; i++)
	{
		if (board[i] == 'X' && check(board, len, i, 2))
		{
			for (int j = 0; j < 2; j++)
				board[i + j] = 'B';
		}
	}

	int value = 1;

	for (int i = 0; i < len; i++)
	{
		if (board[i] == 'X')
		{
			value = 0;
			break;
		}
	}
	if (value)
		printf("%s\n", board);

	else
		printf("-1\n");

	return 0;
}