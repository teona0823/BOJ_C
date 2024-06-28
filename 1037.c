#include <stdio.h>

int main()
{
	int n;
	int num[50];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	int max = num[0];
	int min = num[0];

	for (int i = 1; i < n; i++)
	{
		if (max < num[i]) max = num[i];
		if (min > num[i]) min = num[i];
	}

	printf("%d", max * min);

	return 0;
}