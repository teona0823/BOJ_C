#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int tot = 1;

	for (int i = 1; i <= n; i++)
		tot = tot * 2;

	if (n >= 1 && n <= 5)
		printf("%d", tot);

	return 0;
}