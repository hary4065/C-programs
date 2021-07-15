#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%4d ", dsum(n));
}
int dsum(int n)
{
    if (n == 0)
        return 0;
    static int sum = 0;
    sum += n % 10;
    dsum(n / 10);
    return sum;
}