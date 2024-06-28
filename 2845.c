#include <stdio.h>

int main()
{
	int l, p;
	int num[5];

	scanf("%d%d", &l, &p);

	for (int i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 5; i++)
		printf("%d ", num[i] - l * p);

	return 0;
}