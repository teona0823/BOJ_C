#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char n[100001];

int compare(const void* a, const void* b)
{
	return (*(char*)b - *(char*)a);
}

int main()
{
	int sum = 0;

	scanf("%s", n);

	for (int i = 0; n[i] != NULL; i++)
		sum += n[i] - '0';

	if (strchr(n, '0') == NULL || sum % 3 != 0)
	{
		printf("-1\n");
		return 0;
	}
	else
		qsort(n, sizeof(n) - 1, sizeof(char), compare);

	printf("%s\n", n);

	return 0;
}