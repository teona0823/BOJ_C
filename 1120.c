#include <stdio.h>
#include <string.h>

int main()
{
	char a[51], b[51];
	scanf("%s%s", a, b);

	int lena = strlen(a);
	int lenb = strlen(b);

	int term = lenb - lena;
	int min = 50;

	for (int i = 0; i <= term; i++)
	{
		int cnt = 0;

		for (int j = 0; j < lena; j++)
		{
			if (a[j] != b[i + j])
				cnt++;
		}

		if (cnt < min)
			min = cnt;
	}

	printf("%d\n", min);

	return 0;
}