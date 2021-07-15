#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("Enter radius of circle : ");
    scanf("%d", &r);
    printf("Area of circle is %3.3f", pi * r * r);
}