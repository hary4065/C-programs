#include <stdio.h>
#include <stdlib.h>

int **allocate(int row, int col)
{
    int **p;
    p = (int **)malloc(row * sizeof(int *));
    if (p == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    for (int i = 0; i < row; i++)
        *(p + i) = (int *)malloc(col * sizeof(int));
    return p;
}
void inputvalues(int **p, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter value for %d row %d col", i, j);
            scanf("%d", (*(p + i) + j));
        }
    }
}
void printvalues(int **p, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%8d", *(*(p + i) + j));
        }
        printf("\n");
    }
}

int main()
{

    int **p;
    int row, col;
    printf("Enter Number of rows and column:");
    scanf("%d%d", &row, &col);
    p = allocate(row, col);
    inputvalues(p, row, col);
    printvalues(p, row, col);
}
