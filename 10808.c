#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int num[26] = { 0 };

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i + 97 == str[j])
                num[i]++;
        }
    }

    for (int i = 0; i < 26; i++)
        printf("%d ", num[i]);

    return 0;
}