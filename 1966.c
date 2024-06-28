#include <stdio.h>

int main()
{
    int t, n, m;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d%d", &n, &m);

        int queue[100];
        int idx = 0, cnt = 1;

        for (int j = 0; j < n; j++)
            scanf("%d", &queue[j]);

        while (1)
        {
            int max = 0;

            for (int j = 0; j < n; j++)
                max < queue[j] && (max = queue[j]);

            while (queue[idx] != max)
                idx = (idx + 1) % n;

            if (idx == m)
                break;

            cnt++;
            queue[idx] = -1;
        }
        printf("%d\n", cnt);
    }

    return 0;
}