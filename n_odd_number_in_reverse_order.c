#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n)
        printf("%d ", 2 * n-- - 1);
}