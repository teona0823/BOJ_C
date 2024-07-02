#include <stdio.h>
#include <string.h>

int main()
{
	char name[20][51], grade[20][3];
	float credit[20], score[20], sum = 0.0, sumc = 0.0;

	for (int i = 0; i < 20; i++)
	{
		scanf("%s%f%s", name[i], &credit[i], grade[i]);

		if (strcmp(grade[i], "A+") == 0) score[i] = 4.5;
		else if (strcmp(grade[i], "A0") == 0) score[i] = 4.0;
		else if (strcmp(grade[i], "B+") == 0) score[i] = 3.5;
		else if (strcmp(grade[i], "B0") == 0) score[i] = 3.0;
		else if (strcmp(grade[i], "C+") == 0) score[i] = 2.5;
		else if (strcmp(grade[i], "C0") == 0) score[i] = 2.0;
		else if (strcmp(grade[i], "D+") == 0) score[i] = 1.5;
		else if (strcmp(grade[i], "D0") == 0) score[i] = 1.0;
		else if (strcmp(grade[i], "F") == 0) score[i] = 0.0;
		else
		{
			score[i] = 0.0;
			credit[i] = 0.0;
		}

		sum += credit[i] * score[i];
		sumc += credit[i];
	}

	printf("%f", sum / sumc);

	return 0;
}