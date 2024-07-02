#include <stdio.h>

int fibo(int n);

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", fibo(n));

	return 0;
}

int fibo(int n)
{
	int i, ary[21];

	ary[0] = 0;
	ary[1] = 1;

	for (i = 2; i < 21; i++)
		ary[i] = ary[i - 2] + ary[i - 1];

	return ary[n];
}