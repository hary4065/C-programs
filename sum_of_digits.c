#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n % 10)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}
