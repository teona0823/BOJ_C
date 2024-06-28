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
	char a[4], b[4];
	char* temp;
	int digita, digitb;
	int numa = 0, numb = 0;

	scanf("%s%s", a, b);

	for (int i = 2; i >= 0; i--)
	{
		digita = a[i] - 48;
		digitb = b[i] - 48;

		numa += digita * power(10, i);
		numb += digitb * power(10, i);
	}

	if (numa > numb)
		printf("%d", numa);
	else
		printf("%d", numb);

	return 0;
}