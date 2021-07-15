#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    printf("Number of digits is %d\n", i);
    return 0;
}
