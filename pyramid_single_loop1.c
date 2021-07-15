#include <stdio.h>
int main()
{
    int i, h, col, k = 0, n = 1;
    printf("Enter height of Pyramid: ");
    scanf("%d", &h);
    col = 2 * h - 1;
    for (i = 1; i <= col; i++)
    {
        if (i < h - k)
            printf("  ");
        else
        {
            if (n)
                printf(" *");
            else
                printf("  ");
            n = 1 - n;
        }
        if (i == h + k)
        {
            if (i < 2 * h - 1)
                printf(" \n"); //To avoid extra line
            k++;
            i = 0;
            n = 1;
            if (k == h)
                break;
        }
    }
}
