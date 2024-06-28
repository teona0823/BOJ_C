#include <stdio.h>

int main()
{
	int year, leap = 0;

	scanf("%d", &year);

	if (year % 4 == 0)
	{
		leap = 1;
		if (year % 100 == 0)
		{
			leap = 0;
			if (year % 400 == 0)
				leap = 1;
		}
	}

	printf("%d", leap);

	return 0;
}