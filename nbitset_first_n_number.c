#include <stdio.h>
int main()
{
    int x, n, count, y, k = 1;
    printf("How many number to print with how many set bits?\n");
    scanf("%d %d", &x, &n);
    while (x)
    {
        y = k;
        count = 0;
        while (y)
        {
            if (y % 2)
                count++;
            y /= 2;
        }
        if (count == n)
        {
            printf("%4d", k);
            x--;
        }
        k++;
    }
}