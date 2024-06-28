#include <stdio.h>

int main()
{
	long long int n, m;

	scanf("%lld%lld", &n, &m);

	if (n >= m)
		printf("%lld\n", n - m);
	else
		printf("%lld\n", m - n);

	return 0;
}