#include <stdio.h>
int main()
{
    int i, a, b, min, max;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    max = a > b ? a : b;
    for (i = max; i <= a * b; i += max)
        if (i % a == 0 && i % b == 0)
            break;
    printf("LCM is %d", i);
}