#include <stdio.h>
int binary(int n)
{
    unsigned int k = 1 << 31;
    int i;
    for (i = 0; i < sizeof(int) * 8; ++i)
    {
        if ((n & (k >> i)) == k >> i)
            printf("1");
        else
            printf("0");
        if ((i + 1) % 8 == 0)
            printf(" ");
    }
    printf("\n");
}
int main()
{
    int j;
    printf("Enter a number : ");
    scanf("%d", &j);
    binary(j);
    return 0;
}
