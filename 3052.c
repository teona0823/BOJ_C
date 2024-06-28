#include <stdio.h>

int main()
{
	int count = 1;
	int num[10], rest[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		rest[i] = num[i] % 42;
	}

	for (int i = 1; i < 10; i++)
	{
		int diff = 1;

		for (int j = 0; j < i; j++)
		{
			if (rest[i] == rest[j]) diff = 0;
		}

		if (diff) count++;
	}

	printf("%d", count);

	return 0;
}