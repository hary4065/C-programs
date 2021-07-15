#include <stdio.h>
int main()
{
    int i, j, n;
    char c = 'A' - 1;
    printf("Enter length of matrix : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
            printf(" %c", c + j);
        printf("\n");
    }
}