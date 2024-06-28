#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    int cnt = 1;

    while (n > i)
    {
        i += cnt * 6;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}