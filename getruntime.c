#include <stdio.h>
#include <time.h>
int main()
{
    clock_t begin = clock();

    int i, j, n;
    char c = 'A' - 1;
    printf("Enter length of matrix : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
            printf(" %c", c + j);
        printf("\n");
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin);
    printf("\n%Lf", time_spent); // CLOCKS_PER_SEC;
}