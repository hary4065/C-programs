#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, col, row, k = 0, n;
    printf("Enter column width of arrow : ");
    scanf("%d", &col);
    row = 2 * col;
    for (i = 1; i <= row - 1; i++)
    {
        i > col ? k-- : k++;
        n = 1;
        for (j = 1; j <= col; j++)
        {
            if (j >= col + 1 - k)
                printf("%d", n++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
