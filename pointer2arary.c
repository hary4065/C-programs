#define NULL '\0'
#include <stdio.h>
int main()
{

    int *p[3]; //p is array of pointers
    int **k;
    k = p;
    int x[4] = {1, 2, 3, 4};
    int y[4] = {5, 6, 7, 8};
    int z[4] = {9, 10, 11, 12};
    p[0] = x;
    p[1] = y;
    p[2] = z;
    printf("Matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%-5d", *(*(p + i) + j)); // you can even use 'k' instead of 'p'.
        }
        printf("\n");
    }
}
