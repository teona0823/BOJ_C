#include <stdio.h>

int main()
{
	char board[8][8];
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			scanf("%c", &board[i][j]);
		getchar();
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i][j] == 'F' && (i + j) % 2 == 0)
				cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}