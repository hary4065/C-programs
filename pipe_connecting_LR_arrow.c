#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= 3 * n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i <= n)
            {
                if (j >= 2 * n - i)
                    printf(" *");
                else
                    printf("  ");
            }
            else if (i <= 2 * n)
            {
                if (j == n)
                    printf(" |");
                else if (j >= i)
                    printf(" *");
                else if (j <= i - n - 1)
                    printf(" *");
                else
                    printf("  ");
            }
            else if (i > 2 * n && j <= 3 * n + 1 - i)
                printf(" *");
        }
        printf(" \n");
    }
}