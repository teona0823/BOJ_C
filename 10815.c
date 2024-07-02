#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int check(int arr[], int left, int right, int num)
{
    int mid = (left + right) / 2;

    if (num == arr[mid])
        return 1;

    else if (num < arr[mid])
    {
        if (left == right)
            return 0;
        else
            check(arr, left, mid, num);
    }

    else
    {
        if (left == right)
            return 0;
        else
            check(arr, mid + 1, right, num);
    }
}

int arr1[500000];
int arr2[500000];

int main()
{
    int n, m;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    qsort(arr1, n, sizeof(int), compare);

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < m; i++)
        printf("%d ", check(arr1, 0, n - 1, arr2[i]));

    return 0;
}