#include <stdio.h>
int main()
{
    int a, b, min, max, rem;
    printf("HCF of Two numbers.\n");
    printf("Enter the Value of a and b : ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    while (rem = max % min)
    {
        max = min;
        min = rem;
    }
    printf("\nHCF is %d", min);
}