#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d%d%d", &a, &b, &c);
	scanf("%d", &d);

	int h = d / 3600;
	int m = (d - 3600 * h) / 60;
	int s = d - 3600 * h - 60 * m;

	if (c + s >= 60) m++;
	if (b + m >= 60) h++;

	printf("%d %d %d\n", (a + h) % 24, (b + m) % 60, (c + s) % 60);

	return 0;
}