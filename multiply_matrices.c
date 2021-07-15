#include <stdio.h>
int main()
{
    int i, j, A[3][3], B[3][3], prod[3][3], k = 0;
    printf("\nEnter values in matrix A.\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);
    printf("\nEnter values in matrix B.\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);
    printf("\nMultiply of matrix is.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            prod[i][j] = A[i][k] * B[k][j] + A[i][k + 1] * B[k + 1][j] + A[i][k + 2] * B[k + 2][j];
            printf("%6d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
