#include <stdio.h>

int main()
{
    int n, m;
    int num[100];

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    int max = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
                if (max < num[i] + num[j] + num[k] && num[i] + num[j] + num[k] <= m)
                    max = num[i] + num[j] + num[k];
        }
    }

    printf("%d", max);

    return 0;
}