#include <stdio.h>
int main()
{
    int x;
    printf("Odd even checking\n");
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x & 1)
        printf("Number is odd");
    else
        printf("Number is even");
}