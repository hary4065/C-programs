#include <stdio.h>
int main()
{
    int i, h, col, k = 0, n = 1;
    printf("Enter height of Pyramid: ");
    scanf("%d", &h);
    col = 2 * h - 1;
    for (i = 1; i <= h * col; i++)
    {
        if (i >= h - k + col * k && i <= h + k + col * k)
        {
            if (n)
                printf(" *");
            else
                printf("  ");
            n = 1 - n;
        }
        else
            printf("  ");
        if (i == (k + 1) * col)
            printf(" \n", k++, n = 1);
    }
}