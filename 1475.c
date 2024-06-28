#include <stdio.h>
#include <string.h>

int main()
{
	char n[8];
	int num[9] = { 0 };
	int max = 0;

	scanf("%s", n);

	int len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		if (n[i] == '9')
			num[6]++;
		else
			num[n[i] - '0']++;
	}

	num[6]++;
	num[6] /= 2;

	for (int i = 0; i < 9; i++)
	{
		if (max < num[i])
			max = num[i];
	}

	printf("%d\n", max);

	return 0;
}