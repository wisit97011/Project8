#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < (2 * 10); j++)
        {
            if (i >= j)
                printf("*");
            else
                printf(" ");
            if (i >= (2 * 10 - 1) - j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < (2 * 10); j++)
        {
            if (i + j <= 10 - 1)
                printf("*");
            else
                printf(" ");
            if ((i + 10) <= j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}