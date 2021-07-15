#include <stdio.h>
int main()
{
    int i, j, row, k = 0;
    printf("Enter length of matrix : ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        if (i % 2)
            k = k + i;
        else
            k = k + i - 1;
        for (j = 1; j <= 2 * i - 1; j++)
            if (j % 2)
                i % 2 ? printf(" %d", k++) : printf(" %d", k--);
            else
                printf(" *");
        printf("\n");
    }
}