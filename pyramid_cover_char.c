#include <stdio.h>
int main()
{
    int i, j, k, b;
    char c = 'A';
    printf("Enter a number : ");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        c = 'A';
        for (j = 1; j <= k * 2 - 1; j++)
        {
            if (j <= k + 1 - i || j >= k - 1 + i)
            {
                printf("%c", c);
                j < k ? c++ : c--;
            }
            else
            {
                printf(" ");
                if (j == k)
                    c--;
            }
        }
        printf("\n");
    }
}
