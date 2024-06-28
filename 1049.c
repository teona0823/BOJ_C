#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int n, m;
	int pack[50], one[50];

	scanf("%d%d", &n, &m);

	for (int i = 0; i < m; i++)
		scanf("%d%d", &pack[i], &one[i]);

	qsort(pack, m, sizeof(int), compare);
	qsort(one, m, sizeof(int), compare);

	if (pack[0] <= (n % 6) * one[0])
		printf("%d\n", (n / 6) * pack[0] + pack[0]);
	else if (pack[0] > 6 * one[0])
		printf("%d\n", n * one[0]);
	else
		printf("%d\n", (n / 6) * pack[0] + (n % 6) * one[0]);

	return 0;
}