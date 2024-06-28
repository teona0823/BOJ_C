#include <stdio.h>
#include <math.h>

int main()
{
	int d, h, w;

	scanf("%d%d%d", &d, &h, &w);

	printf("%d %d\n", (int)(d / sqrt(h * h + w * w) * h), (int)(d / sqrt(h * h + w * w) * w));

	return 0;
}