#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char num[101];
	int total = 0;

	scanf("%d", &n);
	scanf("%s", num);

	for (int i = 0; i < n; i++)
		total += num[i] - 48;

	printf("%d", total);

	return 0;
}