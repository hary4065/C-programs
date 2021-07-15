#include <stdio.h>
int binary(int n)
{
    if (n == 1 || n == 0)
        printf("%d", n);
    else
    {
        binary(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int x;
    printf("Binary To decimal Conversion\n");
    printf("Enter Binary number : ");
    scanf("%d", &x);
    binary(x);
}