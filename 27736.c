#include <stdio.h>

int main()
{
	int n, vote[100], result = 0, invalid = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &vote[i]);
		result += vote[i];

		if (vote[i] == 0)
			invalid += 1;
	}

	if (invalid >= n / 2 + n % 2)
		printf("INVALID\n");
	else
	{
		if (result > 0)
			printf("APPROVED\n");
		else
			printf("REJECTED\n");
	}

	return 0;
}