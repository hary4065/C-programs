#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("\nPrime Factors are\n");
    for (i = 2; i <= n; i++)
        if (n % i == 0)
        /* if (n % i == 0 && primecheck(i)) 
        no need as we always start from lowest prime number */
        {
            printf("%-4d", i);
            n = n / i;
            i = 1;
        }
}
int primecheck(int i)
{
    for (int j = 2; j <= i / 2; j++)
        if (i % j == 0)
            return 0;
    return 1;
}