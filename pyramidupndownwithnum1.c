#include <stdio.h>
int main()
{
    int row, column, i, j, k;
    printf("Enter height of pyramid : ");
    scanf("%d", &row);
    column = row * 2;
    for (int i = 1; i <= row; i++)
    {
        k = i;
        for (j = 1; j <= column - 1; j++)
            if (j >= row + 1 - i && j <= row - 1 + i)
            {
                printf("%d", k);
                j < row ? k++ : k--;
            }
            else
                printf(" ");
        printf("\n");
    }
}