#include <stdio.h>

int main()
{
	int n;
	double score[1000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &score[i]);
	}

	double m = score[0];
	for (int i = 0; i < n; i++)
	{
		if (m < score[i])
			m = score[i];
	}

	double tot_score = 0;
	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] * 100 / m;
		tot_score += score[i];
	}
	printf("%lf", tot_score / (double)n);

	return 0;
}