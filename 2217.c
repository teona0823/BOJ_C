#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int rope[100000];

int main()
{
	int n;
	int max = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &rope[i]);

	qsort(rope, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
	{
		if (max < (n - i) * rope[i])
			max = (n - i) * rope[i];
	}

	printf("%d\n", max);

	return 0;
}