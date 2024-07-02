#include <stdio.h>

int a = 0;
int b = 0;

int abs(int k)
{
	if (k >= 0) return k;
	else return -k;
}

void dist(int x, int r, int t)
{
	if (abs(x - t) < r)
		a++;
	else if (abs(x - t) == r)
		b++;
}

int main()
{
	int n;
	int x, y, r;
	int t;

	scanf("%d", &n);

	scanf("%d%d%d", &x, &y, &r);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);

		dist(x, r, t);
	}

	printf("%d %d\n", a, b);

	return 0;
}