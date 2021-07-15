#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    printf("\nHow many terms of fibonacci series? : ");
    scanf("%d", &j);
    for (i = 1; i <= j; i++)
        printf("%5d", fib(i));
    getch();
}
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}