#include <stdio.h>

typedef struct
{
    int digit[100];
    int len;
} Num;

void bigint(Num* num)
{
    num->digit[0] = 1;

    for (int i = 1; i < 100; i++)
        num->digit[i] = 0;

    num->len = 1;
}

void power(Num* num, int n)
{
    for (int i = 0; i < n; i++)
    {
        int carry = 0;

        for (int j = 0; j < num->len; j++)
        {
            int product = num->digit[j] * 2 + carry;
            num->digit[j] = product % 10;
            carry = product / 10;
        }

        if (carry > 0)
        {
            num->digit[num->len] = carry;
            num->len++;
        }
    }
}

void print(Num* num)
{
    for (int i = num->len - 1; i > 0; i--)
        printf("%d", num->digit[i]);

    printf("%d\n", num->digit[0] - 1);
}

void hanoi(int n, int a, int b, int c)
{
    if (n == 1)
    {
        printf("%d %d\n", a, c);
        return;
    }

    hanoi(n - 1, a, c, b);
    printf("%d %d\n", a, c);
    hanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    scanf("%d", &n);

    Num num;

    bigint(&num);
    power(&num, n);
    print(&num);

    if (n <= 20)
        hanoi(n, 1, 2, 3);

    return 0;
}