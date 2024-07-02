#include <stdio.h>
#define M 1234567891

int main()
{
	int l;
	long long int hash = 0, r = 1;
	char str[51];

	scanf("%d%s", &l, str);

	for (int i = 0; i < l; i++)
	{
		hash = (hash + (str[i] - 'a' + 1) * r) % M;
		r = (r * 31) % M;
	}
	printf("%lld\n", hash);

	return 0;
}