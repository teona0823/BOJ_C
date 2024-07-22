#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char site[21];
	char pass[21];
} Arr;

Arr arr[100000];
char find[100000][21];

int compare(char* a, char* b)
{
	Arr* arr1 = (Arr*)a;
	Arr* arr2 = (Arr*)b;

	return strcmp(arr1->site, arr2->site);
}

void search(Arr arr[], char find[], int n)
{
	int l = 0, r = n - 1;

	while (l <= r)
	{
		int m = (l + r) / 2;
		if (strcmp(find, arr[m].site) == 0)
		{
			printf("%s\n", arr[m].pass);
			break;
		}

		else if (strcmp(find, arr[m].site) > 0)
			l = m + 1;
		else
			r = m - 1;
	}
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%s%s", arr[i].site, arr[i].pass);

	for (int i = 0; i < m; i++)
		scanf("%s", find[i]);

	qsort(arr, n, sizeof(Arr), compare);

	for (int i = 0; i < m; i++)
		search(arr, find[i], n);

	return 0;
}