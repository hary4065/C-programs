#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter value of a and b : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping value of a= %d and b= %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping value of a= %d and b= %d \n", a, b);
}