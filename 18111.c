#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m, b;
    int max = 0, min = 256;
    int height[500][500];

    scanf("%d%d%d", &n, &m, &b);

    max = 0, min = 256;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &height[i][j]);
            if (height[i][j] < min)
                min = height[i][j];

            else if (height[i][j] > max)
                max = height[i][j];
        }
    }

    int min_time = INT_MAX, block_height = 256;

    for (int i = max; i >= min; i--)
    {
        int inv = b;
        int time = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                int diff = height[j][k] - i;

                if (diff < 0)
                {
                    time -= diff;
                    inv += diff;
                }
                else if (diff > 0)
                {
                    time += diff * 2;
                    inv += diff;
                }
            }
        }

        if (inv >= 0)
        {
            if (time < min_time)
            {
                min_time = time;
                block_height = i;
            }
        }
    }

    printf("%d %d\n", min_time, block_height);

    return 0;
}