#include <stdio.h>
int main()
{
    int i, j, k, b;
    printf("Enter height of pyramid.\n");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        b = 'A';
        for (j = 1; j <= k * 2 - 1; j++)
        {
            if (j >= k + 1 - i && j <= k - 1 + i)
            {
                printf("%c", b);
                j < k ? b++ : b--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
