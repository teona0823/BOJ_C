#include <stdio.h>

int e[2], s[2], m[2];
int year;

int main()
{
	scanf("%d%d%d", &e[0], &s[0], &m[0]);

	while (!(e[0] == e[1] && s[0] == s[1] && m[0] == m[1]))
	{
		e[1] = e[1] % 15 + 1;
		s[1] = s[1] % 28 + 1;
		m[1] = m[1] % 19 + 1;

		year++;
	}

	printf("%d\n", year);

	return 0;
}