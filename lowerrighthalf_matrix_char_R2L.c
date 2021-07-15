#include <stdio.h>
int main()
{
    int i, j, row;
    char c = 64;
    printf("Enter length of matrix : ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        c = c + 2 * i - 1;
        for (j = 1; j <= row; j++)
        {
            if (j <= row - i)
                printf("  ");
            else
                printf(" %c", c--);
        }
        printf("\n");
    }
}