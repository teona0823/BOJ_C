#include <stdio.h>

int paper[128][128];
int white, blue;

void color(int x, int y, int n)
{
	int cnt = 0;

	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
			paper[i][j] && cnt++;
	}

	if (cnt == n * n)
		blue++;

	else if (cnt == 0)
		white++;

	else
	{
		color(x, y, n / 2);
		color(x + n / 2, y, n / 2);
		color(x, y + n / 2, n / 2);
		color(x + n / 2, y + n / 2, n / 2);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d", &paper[i][j]);
	}

	color(0, 0, n);

	printf("%d\n", white);
	printf("%d\n", blue);

	return 0;
}