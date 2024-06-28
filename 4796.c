#include <stdio.h>

int main()
{
	int l, p, v;

	for (int i = 1;; i++)
	{
		scanf("%d%d%d", &l, &p, &v);

		if (p == 0 && l == 0 && v == 0) break;
		else
		{
			int use = l * (v / p);
			int remain = v % p;

			if (remain > l) remain = l;

			printf("Case %d: %d\n", i, use + remain);
		}
	}

	return 0;
}