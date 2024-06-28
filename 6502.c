#include <stdio.h>

int main()
{
	int r, w, l;

	for (int i = 1;; i++)
	{
		scanf("%d", &r);
		if (r == 0) break;
		scanf("%d%d", &w, &l);

		if (4 * r * r < w * w + l * l)
			printf("Pizza %d does not fit on the table.\n", i);
		else
			printf("Pizza %d fits on the table.\n", i);
	}

	return 0;
}