#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter value of a and b : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping value of a= %d and b= %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping value of a= %d and b= %d \n", a, b);
}