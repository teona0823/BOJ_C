#include <stdio.h>
#include <string.h>

int s[20];

void add(int x);
void rmv(int x);
void check(int x);
void toggle(int x);
void all();
void empty();

int main()
{
	int m;
	char cmd[7];
	int x;

	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%s", cmd);

		if (strcmp(cmd, "add") == 0)
		{
			scanf("%d", &x);
			add(x);
		}
		else if (strcmp(cmd, "remove") == 0)
		{
			scanf("%d", &x);
			rmv(x);
		}
		else if (strcmp(cmd, "check") == 0)
		{
			scanf("%d", &x);
			check(x);
		}
		else if (strcmp(cmd, "toggle") == 0)
		{
			scanf("%d", &x);
			toggle(x);
		}
		else if (strcmp(cmd, "all") == 0)
			all();
		else if (strcmp(cmd, "empty") == 0)
			empty();
	}

	return 0;
}

void add(int x)
{
	s[x - 1] = 1;
}

void rmv(int x)
{
	s[x - 1] = 0;
}

void check(int x)
{
	printf("%d\n", s[x - 1]);
}

void toggle(int x)
{
	if (s[x - 1])
		s[x - 1] = 0;
	else
		s[x - 1] = 1;
}

void all()
{
	for (int i = 0; i < 20; i++)
		s[i] = 1;
}

void empty()
{
	for (int i = 0; i < 20; i++)
		s[i] = 0;
}