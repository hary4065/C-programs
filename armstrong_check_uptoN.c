#include <stdio.h>
int main()
{
    int n, count, x, r, sum, i, k = 1, j;
    printf("Armstrong number upto N.\n");
    printf("Enter the Value of N : ");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        sum = 0;
        count = 0;
        x = j;
        while (x)
        {
            x = x / 10;
            count++;
        }
        x = j;
        while (x)
        {
            r = x % 10;
            x = x / 10;
            k = r;
            for (i = 2; i <= count; i++)
                k = k * r;
            sum = sum + k;
        }
        if (sum == j)
            printf("%d\n", sum);
    }
}