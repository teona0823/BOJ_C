#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	int* h = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);

	int max = h[n - 1];
	int cnt = 1;

	for (int i = n - 2; i >= 0; i--)
	{
		if (h[i] > max)
		{
			max = h[i];
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}