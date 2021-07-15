#include <stdio.h>
int main()
{
    int i, j, h, col, k = 1, num;
    char c;
    printf("Enter height of pyramid: ");
    scanf("%d", &h);
    col = 2 * h - 1;
    for (i = 1; i <= h; i++)
    {
        c = 'A';
        num = 1;
        for (j = 1; j <= col; j++)
            if (j >= h + 1 - i && j <= h - 1 + i && k)
                if (i % 2)
                    printf(" %d", num++, k = 0);
                else
                    printf(" %c", c++, k = 0);
            else
                printf("  ", k = 1);
        printf(" \n");
    }
}