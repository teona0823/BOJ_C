#include <stdio.h>

void check(int a)
{
	printf("%d ", a / 25);
	a -= 25 * (a / 25);

	printf("%d ", a / 10);
	a -= 10 * (a / 10);

	printf("%d ", a / 5);
	a -= 5 * (a / 5);

	printf("%d\n", a);
}

int main()
{
	int t;
	int change[500];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
		scanf("%d", &change[i]);

	for (int i = 0; i < t; i++)
		check(change[i]);

	return 0;
}