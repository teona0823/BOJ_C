#include <stdio.h>

int main()
{
	int k;
	int num[100000] = { 0 };
	int cnt = 0;
	int sum = 0;

	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &num[cnt]);
		if (num[cnt] == 0)
			num[--cnt] = 0;
		else cnt++;
	}

	for (int i = 0; i < cnt; i++)
		sum += num[i];

	printf("%d\n", sum);

	return 0;
}