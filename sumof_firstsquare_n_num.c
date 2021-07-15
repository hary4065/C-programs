#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int n, sum = 0;
    printf("Enter Number upto which you want to calculate sum of square of first n numbers.\n");
    scanf("%d", &n);
    //sum = (n * (n + 1) * (2 * n + 1)) / 6;
    for (int i = 1; i <= n; i++)
        sum += i * i;
    printf("Sum is %d", sum);
}