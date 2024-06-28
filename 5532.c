#include <stdio.h>

int main()
{
	int l, a, b, c, d;

	scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);

	int kor = a / c;
	if (a % c != 0) kor++;

	int mat = b / d;
	if (b % d != 0) mat++;

	if (kor > mat)
		printf("%d\n", l - kor);
	else
		printf("%d\n", l - mat);

	return 0;
}