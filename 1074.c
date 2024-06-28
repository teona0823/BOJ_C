#include <stdio.h>

int power(int n)
{
	int result = 1;

	for (int i = 0; i < n; i++)
		result *= 2;

	return result;
}

int main()
{
	int n, r, c;
	int res = 0;

	scanf("%d%d%d", &n, &r, &c);

	for (int i = n; i > 1; i--)
	{
		int size = power(i);
		int square = (size / 2) * (size / 2);

		if (r < size / 2 && c >= size / 2)
		{
			res += square;
			c -= size / 2;
		}
		else if (r >= size / 2 && c < size / 2)
		{
			res += 2 * square;
			r -= size / 2;
		}
		else if (r >= size / 2 && c >= size / 2)
		{
			res += 3 * square;
			c -= size / 2;
			r -= size / 2;
		}
	}

	printf("%d\n", res + 2 * r + c);

	return 0;
}