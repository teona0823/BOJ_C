#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	int* s = (int*)malloc(sizeof(int) * n);
	int max = 0;
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);

		if (s[i] != 0)
			cnt++;
		else
		{
			if (max < cnt)
				max = cnt;

			cnt = 0;
		}

		if (i == n - 1 && max < cnt)
			max = cnt;
	}

	printf("%d\n", max);

	free(s);

	return 0;
}