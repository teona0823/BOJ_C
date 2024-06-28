#include <stdio.h>

int main()
{
	int n[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &n[i]);
		sum += (n[i] * n[i]);
	}

	printf("%d\n", sum % 10);

	return 0;
}