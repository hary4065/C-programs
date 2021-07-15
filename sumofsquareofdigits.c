#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%4d ", sqdsum(n));
}
int sqdsum(int n)
{
    if (n / 10 == 0)
        return n * n;
    static int sum = 0;
    sum += (n % 10) * (n % 10);
    sqdsum(n / 10);
    return sum;
}