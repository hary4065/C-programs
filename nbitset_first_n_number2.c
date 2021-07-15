#include <stdio.h>
int main()
{
    int n;
    printf("How many number to print with how many set bits?\n");
    scanf("%d", &n);
    for (int i = 2; n; i *= 2)
        for (int j = 1; j < i; j *= 2)
        {
            printf("%4d ", i + j);
            n--;
            if (!n)
                break;
        }
}