#include <stdio.h>

int main()
{
    int n, m, k;

    scanf("%d%d%d", &n, &m, &k);

    int max = n / 2 < m ? n / 2 : m;
    k -= n + m - 3 * max;

    if (k > 0)
    {
        k--;
        max -= k / 3 + 1;
    }

    printf("%d\n", max);

    return 0;
}