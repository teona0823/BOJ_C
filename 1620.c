#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int num;
	char name[21];
} Arr;

int compare(const void* a, const void* b)
{
	Arr* arr1 = (Arr*)a;
	Arr* arr2 = (Arr*)b;

	return strcmp(arr1->name, arr2->name);
}

void search(Arr arr[], char find[], int n)
{
	int l = 0, r = n - 1;

	while (l <= r)
	{
		int m = (l + r) / 2;
		if (strcmp(find, arr[m].name) == 0)
		{
			printf("%d\n", arr[m].num);
			break;
		}

		else if (strcmp(find, arr[m].name) > 0)
			l = m + 1;
		else
			r = m - 1;
	}
}

int main()
{
	int n, m;
	char find[21];

	scanf("%d%d", &n, &m);

	Arr* arr = (Arr*)malloc(n * sizeof(Arr)); // 정렬 X
	Arr* ary = (Arr*)malloc(n * sizeof(Arr)); // 정렬 O

	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr[i].name);

		arr[i].num = ary[i].num = i + 1;
		strcpy(ary[i].name, arr[i].name);
	}

	qsort(ary, n, sizeof(Arr), compare);

	for (int i = 0; i < m; i++)
	{
		scanf("%s", find);

		if (find[0] >= '0' && find[0] <= '9')
		{
			int idx = atoi(find);
			printf("%s\n", arr[idx - 1].name);
		}
		else
			search(ary, find, n);
	}

	return 0;
}