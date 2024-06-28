#include <stdio.h>

void factor(int n)
{
	int check, sum = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) sum += i;
	}

	if (sum == n)
	{
		printf("%d = 1", n);
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0) printf(" + %d", i);
		}
		printf("\n");
	}
	else
		printf("%d is NOT perfect.\n", n);

}

int main()
{
	int n[100000];
	int count = 0;

	for (int i = 0; i < 100000; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] == -1) break;
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		factor(n[i]);
	}

	return 0;
}