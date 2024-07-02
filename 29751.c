#include <stdio.h>

int main()
{
    int w, h;
    double result;

    scanf("%d%d", &w, &h);
    result = 0.5 * w * h;

    printf("%.1lf\n", result);

    return 0;
}