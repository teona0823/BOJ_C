#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d%d", &a, &b);
	scanf("%d", &c);

	b += c;
	while (a >= 24 || b >= 60)
	{
		if (b >= 60)
		{
			b -= 60;
			a++;
			if (a >= 24)
				a -= 24;
		}
	}

	printf("%d %d\n", a, b);

	return 0;
}