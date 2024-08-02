#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);

		int days = 1;
		int kindnum = 0;
		char cloth[21], kind[21];
		char kindlist[30][21];
		int kindnumlist[30] = { 0 };

		for (int j = 0; j < n; j++)
		{
			scanf("%s%s", cloth, kind);

			int k;
			for (k = 0; k < kindnum; k++)
			{
				if (strcmp(kind, kindlist[k]) == 0)
				{
					kindnumlist[k]++;
					break;
				}
			}

			if (k == kindnum)
			{
				strcpy(kindlist[kindnum], kind);
				kindnumlist[kindnum++]++;
			}
		}

		for (int j = 0; j < kindnum; j++)
			days *= (kindnumlist[j] + 1);

		printf("%d\n", days - 1);
	}

	return 0;
}