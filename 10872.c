#include <stdio.h>

int main()
{
	int n, fact = 1;

	scanf("%d", &n);

	if (n >= 1 && n <= 12)
	{
		for (int i = n; i >= 1; i--)
			fact = fact * i;
	}

	printf("%d\n", fact);

	return 0;
}