#include <stdio.h>

int main()
{
	int n;
	int w[50], h[50];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d%d", &w[i], &h[i]);

	for (int i = 0; i < n; i++)
	{
		int order = 1;

		for (int j = 0; j < n; j++)
		{
			if (w[i] < w[j] && h[i] < h[j])
				order++;
		}

		printf("%d ", order);
	}

	return 0;
}