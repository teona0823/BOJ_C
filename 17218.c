#include <stdio.h>
#include <string.h>

char str1[42] = "0";
char str2[42] = "0";
int arr[42][42];

int max(int a, int b)
{
	return a > b ? a : b;
}

void print(int i, int j)
{
	if (i * j == 0)
		return;

	if (str1[i] == str2[j])
	{
		print(i - 1, j - 1);
		printf("%c", str1[i]);
	}
	else
	{
		if (arr[i][j] == arr[i][j - 1])
			print(i, j - 1);

		else
			print(i - 1, j);
	}
}

int main()
{
	char a[41], b[41];
	scanf("%s%s", a, b);
	
	strcat(str1, a);
	strcat(str2, b);
	
	for (int i = 1; i <= strlen(str1); i++)
	{
		for (int j = 1; j <= strlen(str2); j++)
		{
			if (str1[i] == str2[j])
				arr[i][j] = arr[i - 1][j - 1] + 1;

			else
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
		}
	}

	print(strlen(a), strlen(b));

	return 0;
}