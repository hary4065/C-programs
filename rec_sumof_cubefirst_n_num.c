#include <stdio.h>
int nsum(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%4d ", nsum(n));
}
int nsum(int n)
{
    if (n == 0)
        return 0;
    static int sum = 0;
    sum += n * n * n;
    nsum(n - 1);
    return sum;
}