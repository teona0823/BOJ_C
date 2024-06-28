#include <stdio.h>

int main()
{
	int n;
	long long int fibo[91];

	scanf("%d", &n);

	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i < 91; i++)
		fibo[i] = fibo[i - 2] + fibo[i - 1];

	printf("%lld\n", fibo[n]);

	return 0;
}