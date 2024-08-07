#include <stdio.h>

int n, m;
int arr[8];

void back(int num, int last)
{
	if (num == m)
	{
		for (int i = 0; i < m; i++)
			printf("%d ", arr[i] + 1);

		printf("\n");
	}

	else
	{
		for (int i = last; i < n; i++)
		{
			arr[num] = i;
			back(num + 1, i + 1);
		}
	}
}

int main()
{
	scanf("%d%d", &n, &m);

	back(0, 0);

	return 0;
}