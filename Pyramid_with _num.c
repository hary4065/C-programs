#include <stdio.h>
int main()
{
    int i, j, row, column;
    printf("Enter a number.\t");
    scanf("%d", &row);
    column = row * 2;
    for (i = 1; i <= row; i++)
    {
        printf("%d\t", i);
        for (j = 1; j <= column - 1; j++)
            if (j > row - i && j < row + i)
            {
                if (j <= row)
                    printf("%d", i++);
                if (j == row)
                    --i;
                if (j > row)
                    printf("%d", --i);
            }
            else
                printf(" ");
        printf("\n");
    }
}
