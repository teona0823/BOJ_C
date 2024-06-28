#include <stdio.h>

int main()
{
	int n;
	int score = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		score += n;
	}

	printf("%d\n", score);

	return 0;
}