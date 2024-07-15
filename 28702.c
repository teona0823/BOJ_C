#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int num(const char str[])
{
	if (str[0] <= '9')
		return 1;

	return 0;
}

int main()
{
	char str[3][9];
	int index;

	for (int i = 0; i < 3; i++)
		scanf("%s", str[i]);

	for (int i = 2; i >= 0; i--)
	{
		if (num(str[i]))
		{
			index = i;
			break;
		}
	}

	int n = atoi(str[index]) + (3 - index);

	if (n % 15 == 0)
		printf("FizzBuzz\n");
	else if (n % 3 == 0)
		printf("Fizz\n");
	else if (n % 5 == 0)
		printf("Buzz\n");
	else
		printf("%d\n", n);

	return 0;
}