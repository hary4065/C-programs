#include <stdio.h>
int main()
{
    int x, i = 1, count = 0;
    printf("Enter a number to check 1's:\n");
    scanf("%d", &x);
    while (i <= sizeof(int) * 8)
    {
        if ((x & 1 << i) == 1 << i)
            count++;
        i++;
    }
    printf("%d", count);
}
