#include <stdio.h>
int main()
{
    int i, j, A[3][3], B[3][3], prod[3][3], k = 0, sum;
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
            sum = 0;
            for (k = 0; k < 3; k++)
                sum += A[i][k] * B[k][j];
            prod[i][j] = sum;
            printf("%6d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
