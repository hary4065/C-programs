#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, i, min;
    printf("Enter two Numbers : ");
    scanf("%d %d", &a, &b);
    min = a < b ? a : b;
    for (i = 2; i <= min; i++)
        if (a % i == 0 && b % i == 0)
        {
            printf("\n(%d,%d) are not co-prime", a, b);
            return 0;
        }
    printf("(%d,%d) are co-prime", a, b);
}