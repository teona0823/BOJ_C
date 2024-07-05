#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int search(int arr[], int s, int n)
{
	int l = 0, r = n - 1;

	while (l <= r)
	{
		int m = (l + r) / 2;
		if (s == arr[m])
			return 1;

		else if (s > arr[m])
			l = m + 1;
		else
			r = m - 1;
	}

	return 0;
}

int main()
{
	int na, nb;
	scanf("%d%d", &na, &nb);

	int* a = (int*)malloc(sizeof(int) * na);

	for (int i = 0; i < na; i++)
		scanf("%d", &a[i]);

	int* b = (int*)malloc(sizeof(int) * nb);

	for (int i = 0; i < nb; i++)
		scanf("%d", &b[i]);

	qsort(a, na, sizeof(int), compare);
	qsort(b, nb, sizeof(int), compare);

	int cnt = 0;

	for (int i = 0; i < nb; i++)
	{
		if (search(a, b[i], na))
			cnt++;
	}

	for (int i = 0; i < na; i++)
	{
		if (search(b, a[i], nb))
			cnt++;
	}

	printf("%d\n", na + nb - cnt);

	free(a);
	free(b);

	return 0;
}