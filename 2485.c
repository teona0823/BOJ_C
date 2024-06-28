#include <stdio.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int arrgcd(int arr[], int size)
{
	int result = arr[0];

	for (int i = 1; i < size; i++)
		result = gcd(result, arr[i]);

	return result;
}

int main()
{
	int n;
	int tree[100000] = { 0 };
	int diff[100000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &tree[i]);

	for (int i = 0; i < n - 1; i++)
		diff[i] = tree[i + 1] - tree[i];

	int size = sizeof(diff) / sizeof(diff[0]);

	int div = arrgcd(diff, n - 1);

	int cnt = 0;

	for (int i = 1; i < n; i++)
		cnt += (diff[i - 1] / div) - 1;

	printf("%d\n", cnt);

	return 0;
}