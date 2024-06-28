#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	int x1, y1, r1, x2, y2, r2;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

		int sum = r1 + r2;
		int diff = abs(r1 - r2);
		double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		if (dist == 0 && r1 == r2)
			printf("-1\n");

		else if (dist == sum || dist == diff)
			printf("1\n");

		else if (diff < dist && dist < sum)
			printf("2\n");

		else
			printf("0\n");
	}

	return 0;
}