#include <stdio.h>
int main()
{
    int a, b, min, i;
    printf("HCF of Two numbers.\n");
    printf("Enter the Value of a and b : ");
    scanf("%d %d", &a, &b);
    min = a > b ? b : a;
    for (i = min; i > 0; i--)
        if (a % i == 0 && b % i == 0)
            break;
    printf("\nHCF is %d", i);
}