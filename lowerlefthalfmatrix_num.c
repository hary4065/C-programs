#include <stdio.h>
int main()
{
    int i, j, col, h, num, k = 0;
    printf("Enter height of matrix: ");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        k = 0;
        for (j = 1; j <= h; j++)
            if (j <= i)
            { // printf(" %d", 0 + (i - 1) * (j - 1));
                printf(" %d", k);
                k = k + i - 1;
            }
        printf(" \n");
    }
}
