#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, row, k, width;
    printf("Enter Number of stairs and width of stair : ");
    scanf("%d %d", &row, &k);
    for (i = 1; i <= row; i++)
    {
        width = k;
        for (j = 1; j <= row + width - 1; j++)
            if (j < row + 1 - i)
                printf(" ");
        while (width--)
            printf("*");
        printf("\n");
    }
}
