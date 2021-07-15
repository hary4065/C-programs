#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, row, col, num;
    char c;
    printf("Enter height of pyramid : ");
    scanf("%d", &row);
    col = row * 2;
    for (i = 1; i <= row; i++)
    {
        c = 'A';
        num = 1;
        for (j = 1; j <= col; j++)
        {
            if (i + j <= row)
                printf(" ");
            else if (j >= row + 1 - i && j <= row)
                printf("%c", c++);
            if (j > row && j < row + 1 + i)
                printf("%d", num++);
        }
        printf("\n");
    }

    return 0;
}
