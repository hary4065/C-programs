#include <stdio.h>
int main()
{
    int i, j, row, half, m = 0;
    printf("Enter a number.\t");
    scanf("%d", &row);
    half = (row + 1) / 2;
    for (i = 1; i <= row; i++)
    {
        if (row % 2)
            i <= half ? m++ : m--;
        else
        {
            if (i <= half)
                m++;
            if (i > half + 1)
                m--;
        }
        for (j = 1; j <= row; j++)
        {
            if (j >= half + 1 - m && j <= half - 1 + m)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
}
