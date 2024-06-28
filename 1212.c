#include <stdio.h>
#include <string.h>

char n[333335];

int bin(int num)
{
	int res = 0;

	if (num >= 4)
	{
		res += 100;
		num -= 4;
	}
	if (num >= 2)
	{
		res += 10;
		num -= 2;
	}
	res += num;

	return res;
}

int main()
{
	scanf("%s", n);

	int len = strlen(n);

	printf("%d", bin(n[0] - '0'));
	for (int i = 1; i < len; i++)
		printf("%03d", bin(n[i] - '0'));

	return 0;
}