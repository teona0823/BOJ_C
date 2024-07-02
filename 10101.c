#include <stdio.h>

int main()
{
	int angle[3];
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &angle[i]);
		sum += angle[i];
	}

	if (sum == 180)
	{
		if (angle[0] == angle[1] && angle[1] == angle[2] && angle[0] == angle[2]) printf("Equilateral\n");
		else if (angle[0] != angle[1] && angle[1] != angle[2] && angle[0] != angle[2]) printf("Scalene\n");
		else printf("Isosceles\n");
	}
	else printf("Error\n");

	return 0;
}