#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, rc;
    printf("Enter degree of matrix : ");
    scanf("%d", &rc);
    for (i = 0; i <= rc; i++)
    {
        for (j = rc - i; j >= 0; j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
