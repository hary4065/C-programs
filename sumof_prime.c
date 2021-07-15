#include <stdio.h>
int main()
{
    int n, half, i, j, m = 1;
    printf("Enter any number : ");
    scanf("%d", &n);
    half = (n + 1) / 2;
    for (i = 2; i <= half; i++)
    {
        j = n - i;
        if (isprime(i) && isprime(j))
            printf("%d + %d = %d\n", i, j, n, m = 0);
    }
    if (m)
        printf("No Combination");
}
int isprime(int k)
{
    for (int i = 2; i <= (k + 1) / 2; i++)
        if (k % i == 0)
            return 0;
    return 1;
}
