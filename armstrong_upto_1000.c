#include <stdio.h>
int main()
{
    int n, x, r, sum, i;
    printf("Armstrong number upto N.\n");
    printf("Enter the Value of N : ");
    scanf("%d", &n);
    for (n = 1; n <= 1000; n++)
    {
        x = n;
        sum = 0;
        while (x)
        {
            r = x % 10;
            sum += r * r * r;
            x = x / 10;
        }
        if (sum == n)
            printf("%d\n", sum);
    }
}