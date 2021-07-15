#include <stdio.h>
int calcdet(int a[4][4], int k);
int main()
{
    int A[4][4] = {2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2};
    printf("Determinant is %d", calcdet(A, 4));
}
int calcdet(int a[4][4], int k)
{
    int det = 0, c, m, n, s = 1, b[4][4], i, j;
    if (k == 1)
        return a[0][0];
    else
    {
        det = 0;
        for (c = 0; c <= k - 1; c++)
        {
            m = 0;
            n = 0;
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < k; j++)
                {
                    if (i != 0 && j != c)
                    {
                        b[m][n] = a[i][j];
                        if (n < k - 2)
                            n++;
                        else
                        {
                            n = 0;
                            m++;
                        }
                    }
                    else
                        b[i][j] = 0;
                }
            }
            det = det + s * (a[0][c] * calcdet(b, k - 1));
            s = -1 * s;
        }
    }
    return det;
}