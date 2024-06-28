#include <stdio.h>

void check(int a, int b)
{
	if (b % a == 0)
		printf("factor\n");
	else if (a % b == 0)
		printf("multiple\n");
	else
		printf("neither\n");
}

int main()
{
	int a[100000], b[100000];
	int count = 0;

	for (int i = 0; i < 100000; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		if (a[i] == 0 && b[i] == 0)
			break;
		count++;
	}

	for (int i = 0; i < count; i++)
		check(a[i], b[i]);

	return 0;
}