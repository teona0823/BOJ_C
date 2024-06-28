#include <stdio.h>

int check(int a, int b)
{
	if (a < b) return 1;
	else return -1;
}

int main()
{
	int num[8];
	int value = 0;

	for (int i = 0; i < 8; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 7; i++)
		value += check(num[i], num[i + 1]);

	if (value == 7)
		printf("ascending\n");
	else if (value == -7)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}