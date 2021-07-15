#include <stdio.h>
int main()
{
    int i, j, A[3][3], B[3][3], sum[3][3];
    printf("\nEnter values in matrix A.\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);
    printf("\nEnter values in matrix B.\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);
    printf("\nSum of matrix is.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%6d ", A[i][j] + B[i][j]);
        printf("\n");
    }
    return 0;
}
