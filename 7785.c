#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[6];
	char io[6];
} Arr;

Arr arr[1000000];

int compare(const void* a, const void* b)
{
	Arr arr1 = *(Arr*)a;
	Arr arr2 = *(Arr*)b;

	return strcmp(arr2.name, arr1.name);
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s%s", arr[i].name, arr[i].io);

	qsort(arr, n, sizeof(Arr), compare);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(arr[i].name, arr[i + 1].name) == 0)
			i++;

		else
			printf("%s\n", arr[i].name);
	}

	return 0;
}