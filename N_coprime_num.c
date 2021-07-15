#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 2, b = 2, i, n, count = 0;
    printf("How many co-prime numbers you want: ");
    scanf("%d", &n);
    while (b <= a)
    {
        for (i = 2; i <= b; i++)
            if (a % i == 0 && b % i == 0)
                break;
        if (i == b + 1)
        {
            printf("\n%d %d", a, b);
            count++;
        }
        if (count == n)
            exit(0);
        if (a == b)
        {
            a++;
            b = 1;
        }
        b++;
    }
}