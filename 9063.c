#include <stdio.h>

int main()
{
	int n;
	int x[100000], y[100000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d%d", &x[i], &y[i]);

	int minx = x[0];
	int maxx = x[0];
	int miny = y[0];
	int maxy = y[0];

	for (int i = 1; i < n; i++)
	{
		if (minx > x[i]) minx = x[i];
		if (maxx < x[i]) maxx = x[i];
		if (miny > y[i]) miny = y[i];
		if (maxy < y[i]) maxy = y[i];
	}

	printf("%d", (maxx - minx) * (maxy - miny));

	return 0;
}