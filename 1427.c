#include <stdio.h>
#include <string.h>

void sort(char arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	char n[11];

	scanf("%s", n);

	int len = strlen(n);

	sort(n, len);

	printf("%s\n", n);

	return 0;
}