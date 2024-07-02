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
		temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}

	for (int a = 1; a <= n; a++)
		printf("%d ", basket[a]);

	return 0;
}