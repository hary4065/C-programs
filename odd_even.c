#include <stdio.h>
int main()
{
    int x;
    printf("Odd even checkingusing modulo\n");
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x % 2)
        printf("Number is odd");
    else
        printf("Number is even");
}