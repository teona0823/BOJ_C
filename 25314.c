#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n / 4; i++)
        printf("long ");

    printf("int\n");

    return 0;
}