#include <stdio.h>
#include <math.h>

double dist(int a, int b)
{
	return sqrt(a * a + b * b);
}

int main()
{
	int n, w, h;
	double l;

	scanf("%d%d%d", &n, &w, &h);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &l);

		if (l <= dist(w, h))
			printf("DA\n");
		else
			printf("NE\n");
	}

	return 0;
}