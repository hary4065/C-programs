#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("\nEnter a Natural Number to calculate factorial : ");
    scanf("%d", &n);
    printf("\nFactorial of %d is %d", n, factorial(n));
}
int factorial(int n)
{
    int result = 1, i;
    for (i = n; i > 0; i--)
        result *= i;
    return result;
}