#include <stdio.h>
int main()
{
    int i, k = 1, n, p;
    printf("Enter any number and power to raise\n");
    scanf("%d %d", &n, &p);
    for (i = 1; i <= p; i++)
        k = k * n;
    printf("%d power %d is %d", n, p, k);
}