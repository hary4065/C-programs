#include <stdio.h>
int main()
{
    int i, j, row, spacing, half;
    printf("Enter box length and spacing between inner and outer box : ");
    scanf("%d %d", &row, &spacing);
    if (row % 2)
        half = row / 2 + 1;
    else
        half = row / 2;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if ((i == 1 || i == row || j == 1 || j == row) || (i >= 2 + spacing && i <= row - 1 - spacing && j >= 2 + spacing && j <= row - 1 - spacing)) // first and last row
                if ((row % 2 && spacing % 2 && j == half && i == half) || (i >= 2 + spacing + 1 && i <= row - 2 - spacing && j >= 2 + spacing + 1 && j <= row - 2 - spacing))
                    printf("  ");
                else
                    printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
