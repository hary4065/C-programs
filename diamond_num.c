#include <stdio.h>
int main()
{
    int i, j, row, col, n, k = 0, m;
    printf("Enter number of row : ");
    scanf("%d", &n);
    col = 2 * n - 1;
    row = n * 2 - 1;
    for (i = 1; i <= row; i++)
    {
        i > n ? k-- : k++;
        m = k - 1;
        for (j = 1; j <= col; j++)
        {
            if (j >= n + 1 - k && j <= n - 1 + k)
                printf(" %d", j < n ? m++ % 10 : m-- % 10);
            else
                printf("  ");
        }
        if (i < row)
            printf("\n");
    }
}