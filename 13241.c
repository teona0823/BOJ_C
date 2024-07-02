#include <stdio.h>

int main()
{
	long long int a, b;
	scanf("%lld%lld", &a, &b);

	for (int i = 1; i <= b; i++)
	{
		if ((a * i) % b == 0)
		{
			printf("%lld\n", a * i);
			break;
		}
	}

	return 0;
}