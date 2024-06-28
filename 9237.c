#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}

int t[100000];

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &t[i]);

	qsort(t, n, sizeof(int), compare);

	int max = 0;

	for (int i = 0; i < n; i++)
	{
		if ((i + 2) + t[i] > max)
			max = (i + 2) + t[i];
	}

	printf("%d\n", max);

	return 0;
}