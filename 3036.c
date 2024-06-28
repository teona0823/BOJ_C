#include <stdio.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main()
{
	int n;
	int r[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &r[i]);

	for (int i = 1; i < n; i++)
		printf("%d/%d\n", r[0] / gcd(r[0], r[i]), r[i] / gcd(r[0], r[i]));

	return 0;
}