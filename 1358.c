#include <stdio.h>

int dist(int x1, int y1, int x2, int y2)
{
	int x = x1 - x2;
	int y = y1 - y2;

	return (x * x + y * y);
}

int main()
{
	int w, h, x, y, p;
	int px[50], py[50];

	scanf("%d%d%d%d%d", &w, &h, &x, &y, &p);

	int r = h / 2;
	int cnt = 0;

	for (int i = 0; i < p; i++)
	{
		scanf("%d%d", &px[i], &py[i]);
		if (px[i] >= x && px[i] <= x + w && py[i] >= y && py[i] <= y + h)
			cnt++;
		else
		{
			if (dist(x, y + r, px[i], py[i]) <= r * r || dist(x + w, y + r, px[i], py[i]) <= r * r)
				cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}