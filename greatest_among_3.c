#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enetr three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("\nGreatest is %d", a);
    else if (b >= c)
        printf("\nGreatest is %d", b);
    else
        printf("\nGreatest is %d", c);
}