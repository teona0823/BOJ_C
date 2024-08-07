#include <stdio.h>

long long n, m;
long long tree[1000000];
long long result;

long long max(long long arr[])
{
	long long res = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (res < arr[i])
			res = arr[i];
	}

	return res;
}

void search(long long arr[], int l, int r)
{
	if (l > r)
		return;

	long long sum = 0;
	long long mid = (l + r) / 2;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > mid)
			sum += arr[i] - mid;
	}

	if (sum < m)
		search(arr, l, mid - 1);
	else
	{
		result = mid;
		search(arr, mid + 1, r);
	}
}

int main()
{
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &tree[i]);

	search(tree, 0, max(tree));
	printf("%d\n", result);

	return 0;
}