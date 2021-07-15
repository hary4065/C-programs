#include <stdio.h>
#include <math.h>
int main()
{
    int n, result = 1, i;
    printf("\nEnter a Natural Number to calculate factorial : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
        result *= i;
    printf("\nFactorial of %d is %d", n, result);
}