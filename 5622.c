#include <stdio.h>
#include <string.h>

int main()
{
	char input[16];
	int time = 0;

	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] <= 'C') time += 3;
		else if (input[i] <= 'F') time += 4;
		else if (input[i] <= 'I') time += 5;
		else if (input[i] <= 'L') time += 6;
		else if (input[i] <= 'O') time += 7;
		else if (input[i] <= 'S') time += 8;
		else if (input[i] <= 'V') time += 9;
		else if (input[i] <= 'Z') time += 10;
	}

	printf("%d", time);

	return 0;
}