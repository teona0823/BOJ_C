#include <stdio.h>

int main()
{
	int a, b, num = 0;
	int n[101];

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
		scanf("%d", &n[i]);

	scanf("%d", &b);

	for (int i = 0; i < a; i++)
	{
		if (b == n[i])
			num += 1;
	}

	printf("%d", num);

	return 0;
}