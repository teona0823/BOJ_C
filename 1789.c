#include <stdio.h>

int main()
{
	long long int s;
	long long int sum = 0;

	scanf("%lld", &s);

	for (int i = 0;; i++)
	{
		sum += i + 1;

		if (sum > s)
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}