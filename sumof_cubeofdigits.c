#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%4d ", cubedsum(n));
}
int cubedsum(int n)
{
    if (n == 0)
        return 0;
    static int sum = 0;
    sum += (n % 10) * (n % 10) * (n % 10);
    cubedsum(n / 10);
    return sum;
}