#include <stdio.h>

int score(double a, double b)
{
	double dist = a * a + b * b;

	if (dist <= 9.0) return 100;
	else if (dist <= 36.0) return 80;
	else if (dist <= 81.0) return 60;
	else if (dist <= 144.0) return 40;
	else if (dist <= 225.0) return 20;
	else return 0;
}

int winner(int n, int m)
{
	if (n > m) return 1;
	else if (n < m) return 2;
	else return 0;
}

int main()
{
	int t;
	double x, y;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n = 0;
		int m = 0;

		for (int j = 0; j < 3; j++)
		{
			scanf("%lf%lf", &x, &y);

			n += score(x, y);
		}

		for (int j = 0; j < 3; j++)
		{
			scanf("%lf%lf", &x, &y);

			m += score(x, y);
		}

		if (winner(n, m) == 0) printf("SCORE: %d to %d, TIE.\n", n, m);
		else
			printf("SCORE: %d to %d, PLAYER %d WINS.\n", n, m, winner(n, m));
	}

	return 0;
}