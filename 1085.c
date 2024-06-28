#include <stdio.h>

int main()
{
	int x, y, w, h;

	scanf("%d%d%d%d", &x, &y, &w, &h);

	int w_x = w - x;
	int h_y = h - y;
	int dx, dy;

	if (w_x < x) dx = w_x;
	else dx = x;

	if (h_y < y) dy = h_y;
	else dy = y;

	if (dx < dy) printf("%d", dx);
	else printf("%d", dy);

	return 0;
}