#include <stdio.h>
#include <string.h>

int power(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

int main()
{
	long long int r;
	long long int res[3];
	char color[3][7];

	for (int i = 0; i < 3; i++)
	{
		scanf("%s", color[i]);

		if (strcmp(color[i], "black") == 0) res[i] = 0;
		else if (strcmp(color[i], "brown") == 0) res[i] = 1;
		else if (strcmp(color[i], "red") == 0) res[i] = 2;
		else if (strcmp(color[i], "orange") == 0) res[i] = 3;
		else if (strcmp(color[i], "yellow") == 0) res[i] = 4;
		else if (strcmp(color[i], "green") == 0) res[i] = 5;
		else if (strcmp(color[i], "blue") == 0) res[i] = 6;
		else if (strcmp(color[i], "violet") == 0) res[i] = 7;
		else if (strcmp(color[i], "grey") == 0) res[i] = 8;
		else res[i] = 9;
	}

	r = (10 * res[0] + res[1]) * power(10, res[2]);

	printf("%lld\n", r);

	return 0;
}