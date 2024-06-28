#include <stdio.h>

int main()
{
	int c, n;
	int score[1000];
	int sum;
	double avg;
	int cnt;
	double rate;

	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		sum = 0;
		cnt = 0;

		scanf("%d", &n);

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / (double)n;

		for (int j = 0; j < n; j++)
		{
			if (score[j] > avg)
				cnt++;
		}

		rate = (double)cnt * 100.0 / (double)n;

		printf("%.3lf%%\n", rate);
	}

	return 0;
}