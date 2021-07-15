#include <stdio.h>
int calcdet(int A[4][4], int k);
int main()
{
    int A[4][4] = {2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2};
    printf("Determinant is %d", calcdet(A, 4));
}
int calcdet(int A[4][4], int k)
{
    int det = 0, s = 1, B[4][4], m;
    if (k == 1)
        return A[0][0];
    else
    {
        --k;
        for (int l = 0; l <= k; l++)
        {
            for (int i = 0; i < k; i++)
            {
                m = 0;
                for (int j = 0; j < k; j++)
                {
                    if (m == l)
                        m++;
                    B[i][j] = A[i + 1][m];
                    if (m == k)
                        m = 0;
                    else
                        m++;
                }
            }
            det += s * A[0][l] * calcdet(B, k);
            s = -1 * s;
        }
    }
    return det;
}