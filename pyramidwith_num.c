#include <stdio.h>
int main()
{
    int i, j, row, col, k = 0;
    printf("Enter height of pyramid : ");
    scanf("%d", &row);
    col = 2 * row - 1;
    for (i = 1; i <= row; i++)
    {
        k = i;
        for (j = 1; j <= col; j++)
            if (j >= row + 1 - i && j <= row - 1 + i)
                printf(" %d", j < row ? k-- : k++);
            else
                printf("  ");
        printf("\n");
    }
}
