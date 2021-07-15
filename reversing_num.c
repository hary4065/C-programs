#include <stdio.h>
int main()
{
    int n, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Before reversing : %d\n", n);
    while (n % 10)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("After reversing : %d\n", rev);
    return 0;
}
