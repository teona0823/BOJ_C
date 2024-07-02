#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int arr[300000];

int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    int dev = (int)round(n * 0.15);

    for (int i = dev; i < n - dev; i++)
        sum += arr[i];

    int avg = round((double)sum / (n - 2 * dev));

    printf("%d\n", avg);

    return 0;
}