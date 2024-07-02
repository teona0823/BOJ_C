#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coord;

coord num[100000];

int compare(const void* a, const void* b)
{
    coord A = *(coord*)a;
    coord B = *(coord*)b;

    if (A.y != B.y)
        return A.y - B.y;

    else
        return A.x - B.x;
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &num[i].x, &num[i].y);

    qsort(num, n, sizeof(coord), compare);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", num[i].x, num[i].y);

    return 0;
}