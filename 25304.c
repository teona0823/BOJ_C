#include <stdio.h>

int main()
{
	int x, n, a[100], b[100], result = 0;

	scanf("%d", &x);
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		result += a[i] * b[i];
	}

	if (result == x)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}