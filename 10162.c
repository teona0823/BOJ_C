#include <stdio.h>

int main()
{
	int t;
	int time[3] = { 300, 60, 10 };
	int i = 0;
	int cnt[3] = { 0 };

	scanf("%d", &t);

	if (t % 10 != 0)
	{
		printf("-1\n");
		return 0;
	}

	while (t != 0)
	{
		if (t - time[i] >= 0)
		{
			t -= time[i];
			cnt[i]++;
		}
		else
			i++;
	}

	for (i = 0; i < 3; i++)
		printf("%d ", cnt[i]);

	return 0;
}