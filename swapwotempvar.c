#include <stdio.h>
int main()
{
    int a = 2, b = 5;
    printf("Before swapping.\na= %d b= %d\n", a, b);
    a = b ^ a ^ (b = a);
    printf("After swapping.\na= %d b= %d\n", a, b);
    return 0;
}