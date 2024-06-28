#include <stdio.h>

int main()
{
	int time[4];
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &time[i]);
		sum += time[i];
	}

	printf("%d\n", sum / 60);
	printf("%d\n", sum % 60);

	return 0;
}