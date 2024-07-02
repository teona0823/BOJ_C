#include <stdio.h>

double x[3];
double y[3];

int main()
{
    for (int i = 0; i < 3; i++)
        scanf("%lf%lf", &x[i], &y[i]);

    int flag = 1;
    if (x[0] == x[1] && x[1] == x[2])
        flag = 0;
    else if (y[0] == y[1] && y[1] == y[2])
        flag = 0;
    else if ((double) { (x[0] - x[1]) / (y[0] - y[1]) } == (double) { (x[1] - x[2]) / (y[1] - y[2]) })
        flag = 0;

    if (flag)
        printf("WINNER WINNER CHICKEN DINNER!\n");
    else
        printf("WHERE IS MY CHICKEN?\n");
}