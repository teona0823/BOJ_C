#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);

	int num = 1;
	int line = 1;
	for (int i = 2;; i++)
	{
		if (num >= x) break;
		num += i;
		line++;
	}

	int a, b;

	if (line % 2 == 0)
	{
		a = line;
		b = 1;
		for (int i = num;; i--)
		{
			if (i == x) break;
			a--;
			b++;
		}
	}
	else
	{
		a = 1;
		b = line;
		for (int i = num;; i--)
		{
			if (i == x) break;
			a++;
			b--;
		}
	}
	printf("%d/%d", a, b);

	return 0;
}