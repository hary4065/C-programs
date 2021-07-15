#include <stdio.h>
int main()
{
    int i, j, col, h;
    char c;
    printf("Enter height of pyramid cover: ");
    scanf("%d", &h);
    col = 2 * h - 1;
    for (i = 1; i <= h; i++)
    {
        c = 'A';
        for (j = 1; j <= col; j++)
            if (j >= h + 2 - i && j <= h - 2 + i)
                printf("  ");
            else
                printf(" %c", c + j - 1);
        printf(" \n");
    }
}