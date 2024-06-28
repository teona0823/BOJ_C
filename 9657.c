#include <stdio.h>

int main()
{
	int n;
	int i = 2;

	scanf("%d", &n);

	while (i < n)
	{
		i += 5;

		if (i >= n)
			break;

		i += 2;
	}

	if (n != i)
		printf("SK\n");
	else
		printf("CY\n");

	return 0;
}