#include <stdio.h>

int stack[100000];
char res[200000];

int main()
{
    int n, num;
    int org = 1, s = 0, r = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        while (org <= num)
        {
            stack[s++] = org++;
            res[r++] = '+';
        }

        if (s <= 0 || stack[s - 1] != num)
        {
            puts("NO\n");
            return 0;
        }

        s--;
        res[r++] = '-';
    }

    for (int i = 0; i < r; i++)
        printf("%c\n", res[i]);

    return 0;
}