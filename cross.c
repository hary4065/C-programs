#include <stdio.h>
int main()
{
    int i, j, h;
    printf("Enter height of cross: ");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= h; j++)
            if (j == i || j == h + 1 - i)
                printf(" *");
            else
                printf("  ");
        printf(" \n");
    }
}