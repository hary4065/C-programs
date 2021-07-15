#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    if (n % 5)
        printf("%d is not divisble by %d", n, 5);
    else
        printf("%d is divisible by %d", n, 5);
}