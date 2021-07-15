#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Sum of first N natural numbers.\n");
    printf("Enter the Value of N : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += i;
    printf("\nSum of first %d natural number is %d", n, sum);
}