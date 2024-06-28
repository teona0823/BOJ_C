#include <stdio.h>

int card[1000000];

int main()
{
	int n;

	scanf("%d", &n);

	int cnt = n;

	if (n == 1)
		printf("1\n");
	else
	{
		for (int i = 0; i < n; i++)
			card[i] = i + 1;

		for (int i = 2; i != cnt; i += 2)
			card[cnt++] = card[i - 1];

		printf("%d\n", card[cnt - 1]);
	}

	return 0;
}