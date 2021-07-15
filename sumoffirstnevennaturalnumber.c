#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (n)
        sum += 2 * n--;
    printf("%d", sum);
}