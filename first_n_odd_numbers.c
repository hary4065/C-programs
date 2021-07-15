#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter how many first n Odd numbers you want to print : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf(" %4d", 2 * i - 1);
    }
    return 0;
}
