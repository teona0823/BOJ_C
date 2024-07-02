#include <stdio.h>

int desk[1000][1000];

int distance(int a, int b, int c, int d)
{
	int x = a - c;
	int y = b - d;

	return (x * x) + (y * y);
}

int main()
{
	int n;
	int prof_i, prof_j;
	int stu_i, stu_j;
	int cnt = 0;
	int value = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &desk[i][j]);

			if (desk[i][j] == 2)
			{
				stu_i = i;
				stu_j = j;
			}
			if (desk[i][j] == 5)
			{
				prof_i = i;
				prof_j = j;
			}
		}
	}

	if (stu_i > prof_i)
	{
		int temp = stu_i;
		stu_i = prof_i;
		prof_i = temp;
	}
	if (stu_j > prof_j)
	{
		int temp = stu_j;
		stu_j = prof_j;
		prof_j = temp;
	}

	if (distance(stu_i, stu_j, prof_i, prof_j) >= 25)
	{
		for (int i = stu_i; i <= prof_i; i++)
		{
			for (int j = stu_j; j <= prof_j; j++)
			{
				if (desk[i][j] == 1) cnt++;
			}
		}
		if (cnt >= 3) value = 1;
	}

	printf("%d\n", value);

	return 0;
}