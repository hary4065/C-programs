#include <stdio.h>
int main()
{
    int h;
    printf("\nEnter height of pascal Triangle : ");
    scanf("%d", &h);
    pTriangle(h);
}
int combi(int n, int r)
{
    int upper = 1, lower = 1, i;
    for (i = n; i > (r > (n - r) ? r : (n - r)); i--)
        upper *= i;
    for (i = (r < (n - r) ? r : (n - r)); i > 0; i--)
        lower *= i;
    return (upper / lower);
}
int pTriangle(int n)
{
    int k, r;
    for (int i = 0; i < n; i++)
    {
        k = 1;
        r = 0;
        for (int j = 0; j < 2 * n; j++)
        {
            if (j > n - i - 1 && j < n + i + 1 && k)
            {
                printf(" %d", combi(i, r++));
                k = 0;
            }
            else
            {
                printf("  ");
                k = 1;
            }
        }
        printf("\n");
    }
}