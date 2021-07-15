#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n & 1)
        printf("Number is odd\n");
    else
        printf("Number is even\n");
}
