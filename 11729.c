#include <stdio.h>

int power(int n)
{
    int result = 1;

    for (int i = 0; i < n; i++)
        result *= 2;

    return result;
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

    printf("%d\n", power(n) - 1);
    hanoi(n, 1, 2, 3);

    return 0;
}