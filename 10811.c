#include <stdio.h>

int main()
{
	int n, m;
	int i, j;
	int temp;
	int basket[101];

	for (int a = 0; a < 101; a++)
		basket[a] = a;

	scanf("%d%d", &n, &m);
	for (int a = 0; a < m; a++)
	{
		scanf("%d%d", &i, &j);
		int p = i;
		int q = j;

		for (int b = 0; b < (j - i) / 2 + 1; b++)
		{
			temp = basket[p];
			basket[p] = basket[q];
			basket[q] = temp;

			p++;
			q--;
		}
	}

	for (int a = 1; a <= n; a++)
		printf("%d ", basket[a]);

	return 0;
}