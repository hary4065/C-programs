#include <stdio.h>
int main()
{
    int x;
    printf("Odd even checking without modulus or bitwise\n");
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x / 2 * 2 == x)
        printf("Number is even");
    else
        printf("Number is odd");
}