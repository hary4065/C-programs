#include <stdio.h>
int main()
{
    int n, half, i, j, k, m;
    printf("Enter any number : ");
    scanf("%d", &n);
    half = (n + 1) / 2;
    for (i = 2; i <= half; i++)
        for (j = half; j <= n; j++)
            if ((i + j) == n)
            {
                m = 1;
                for (k = 2; k <= (i + 1) / 2; k++)
                    if (i % k == 0)
                        m = 0;
                for (k = 2; k <= (j + 1) / 2; k++)
                    if (j % k == 0)
                        m = 0;
                if (m)
                    printf("%d + %d = %d\n", i, j, n);
            }
}
int isprime(int n)
{
    for (k = 2; k <= (n + 1) / 2; k++)
        if (n % k == 0)
            return 0;
}
