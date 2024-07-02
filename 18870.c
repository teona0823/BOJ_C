#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    int index;
} coord;

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

coord x[1000000];
int res[1000000];

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i].num);
        x[i].index = i;
    }

    qsort(x, n, sizeof(coord), compare);

    int cnt = 0;

    res[x[0].index] = 0;

    for (int i = 1; i < n; i++)
    {
        if (x[i - 1].num != x[i].num)
            cnt++;
        res[x[i].index] = cnt;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", res[i]);

    return 0;
}