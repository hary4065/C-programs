#include <stdio.h>
int isprime(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n, i = 2;
    printf("How many prime number to print : ");
    scanf("%d", &n);
    while (n)
    {
        if (isprime(i))
        {
            printf("%4d ", i);
            n--;
        }
        i++;
    }
}