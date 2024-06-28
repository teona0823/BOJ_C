#include <stdio.h>
#include <string.h>

int main()
{
	char str[3];

	scanf("%s", str);

	if (strcmp(str, "A+") == 0) printf("4.3\n");
	else if (strcmp(str, "A0") == 0) printf("4.0\n");
	else if (strcmp(str, "A-") == 0) printf("3.7\n");

	else if (strcmp(str, "B+") == 0) printf("3.3\n");
	else if (strcmp(str, "B0") == 0) printf("3.0\n");
	else if (strcmp(str, "B-") == 0) printf("2.7\n");

	else if (strcmp(str, "C+") == 0) printf("2.3\n");
	else if (strcmp(str, "C0") == 0) printf("2.0\n");
	else if (strcmp(str, "C-") == 0) printf("1.7\n");

	else if (strcmp(str, "D+") == 0) printf("1.3\n");
	else if (strcmp(str, "D0") == 0) printf("1.0\n");
	else if (strcmp(str, "D-") == 0) printf("0.7\n");

	else printf("0.0\n");

	return 0;
}