#include <stdio.h>
#include <string.h>

int main()
{
	char name[21];
	int n;
	char team[50][21];

	scanf("%s", name);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", team[i]);

	int max_percent = -1;
	char max_team[21];

	for (int i = 0; i < n; i++)
	{
		int l = 0, o = 0, v = 0, e = 0;

		for (int j = 0; j < strlen(name); j++)
		{
			switch (name[j])
			{
			case 'L':
				l++;
				break;
			case 'O':
				o++;
				break;
			case 'V':
				v++;
				break;
			case 'E':
				e++;
				break;
			}
		}

		for (int j = 0; j < strlen(team[i]); j++)
		{
			switch (team[i][j])
			{
			case 'L':
				l++;
				break;
			case 'O':
				o++;
				break;
			case 'V':
				v++;
				break;
			case 'E':
				e++;
				break;
			}
		}

		int percent = ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100;

		if (percent > max_percent)
		{
			max_percent = percent;
			strcpy(max_team, team[i]);
		}
		else if (percent == max_percent)
		{
			if (strcmp(team[i], max_team) < 0)
				strcpy(max_team, team[i]);
		}
	}

	printf("%s\n", max_team);

	return 0;
}