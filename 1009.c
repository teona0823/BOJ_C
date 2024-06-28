#include <stdio.h>

int main()
{
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int a, b;
		long int data = 1;

		scanf("%d %d", &a, &b);

		for (int j = 0; j < b % 4 + 4; j++)
			data *= a;

		if (data % 10 == 0)
			printf("%d\n", 10);
		else
			printf("%d\n", data % 10);
	}

	return 0;
}