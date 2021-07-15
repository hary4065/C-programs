#include <stdio.h>
int main()
{
    int i, j, row, column, k = 0;
    printf("Enter height of upside down pyramid :  ");
    scanf("%d", &row);
    column = row * 2;
    for (i = 1; i <= row; i++)
    {
        if (i > 1)
            k++;
        for (j = 1; j <= column - 1; j++)
        {
            if (j > k && j < column - k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
