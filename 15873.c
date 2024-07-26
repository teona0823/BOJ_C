#include <stdio.h>
#include <string.h>

int main()
{
    char num[5];
    scanf("%s", num);

    if (strlen(num) == 4)
        printf("20\n");

    else if (strlen(num) == 2)
        printf("%d\n", num[0] - '0' + num[1] - '0');

    else
    {
        if (num[1] == '0')
            printf("%d\n", 10 + num[2] - '0');
        else
            printf("%d\n", 10 + num[0] - '0');
    }

    return 0;
}