#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, m, j, l, u;
    printf("Enter Two number : ");
    scanf("%d %d", &n, &m);
    printf("\nPrime Number are :\n");
    if (n > m)
    {
        l = m;
        u = n;
    }
    else
    {
        l = n;
        u = m;
    }
    for (i = l; i <= u; i++)
    {
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                break;
        if (j == i / 2 + 1)
            printf(" %6d", i);
    }
}
