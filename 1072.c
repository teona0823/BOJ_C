#include <stdio.h>

int main()
{
	long long int x, y, z;
	scanf("%lld%lld", &x, &y);

	z = (100 * y) / x;

	if (z >= 99)
		printf("-1\n");
	else
	{
		long long tmp1 = x * (z + 1) - (100 * y);
		long long tmp2 = 99 - z;
		printf("%lld\n", ((tmp1 % tmp2 > 0) ? (tmp1 / tmp2) + 1 : tmp1 / tmp2));
	}

	return 0;
}