#include <stdio.h>

int pow(int n)
{
	return n * n;
}

int main()
{
	int t;
	int x1, y1, x2, y2;
	int n;
	int cx, cy, r;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int cnt = 0;

		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);

		for (int j = 0; j < n; j++)
		{
			scanf("%d%d%d", &cx, &cy, &r);

			int d1 = pow(x1 - cx) + pow(y1 - cy);
			int d2 = pow(x2 - cx) + pow(y2 - cy);
			int pr = pow(r);

			if (d1 < pr && d2 < pr);
			else if (d1 > pr && d2 > pr);
			else
				cnt++;
		}

		printf("%d\n", cnt);
	}

	return 0;
}