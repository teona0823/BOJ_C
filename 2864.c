#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[11], b[11];

	scanf("%s%s", a, b);

	int lena = strlen(a);
	int lenb = strlen(b);

	for (int i = 0; i < lena; i++)
	{
		if (a[i] == '6')
			a[i] = '5';
	}
	for (int i = 0; i < lenb; i++)
	{
		if (b[i] == '6')
			b[i] = '5';
	}

	printf("%d ", atoi(a) + atoi(b));

	for (int i = 0; i < lena; i++)
	{
		if (a[i] == '5')
			a[i] = '6';
	}
	for (int i = 0; i < lenb; i++)
	{
		if (b[i] == '5')
			b[i] = '6';
	}

	printf("%d\n", atoi(a) + atoi(b));

	return 0;
}