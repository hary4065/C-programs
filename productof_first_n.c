#include <stdio.h>
int main()
{
    int i, n, prod = 1;
    printf("Product of first N natural numbers.\n");
    printf("Enter the Value of N : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        prod *= i;
    printf("\nProduct of first %d natural number is %d", n, prod);
}