#include <stdio.h>

int main()
{
    int a = 20;
    int b = 7;

    int x, y;

    scanf("%d%d", &x, &y);

    if (x == 1 || x == 2)
    {
        b--;
        x += 12;
    }

    int zellar = (21 * a) / 4 + (5 * b) / 4 + (26 * (x + 1) / 10) + y - 1;

    switch (zellar % 7)
    {
    case 1:
        printf("MON\n");
        break;
    case 2:
        printf("TUE\n");
        break;
    case 3:
        printf("WED\n");
        break;
    case 4:
        printf("THU\n");
        break;
    case 5:
        printf("FRI\n");
        break;
    case 6:
        printf("SAT\n");
        break;
    default:
        printf("SUN\n");
        break;
    }

    return 0;
}