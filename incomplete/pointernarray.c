#include <stdio.h>
int main()
{
    int *y, **x, i, j, a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //printf("%p\n%p\n%p\n",&x,&(*x),&(**x));
    *x = &a;
    *(x + 1) = &a[1];
    *(x + 2) = &a[2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // printf("a[%d][%d]= %d \n", i, j, *(*x + j + i * 3));
            printf("a[%d][%d]= %d \n", i, j, *(*x + i * 3 + j));
            //printf("a[%d][%d]= %d \n", i, j, *(y + j + i * 3));
        }
        printf("\n");
    }
    return 0;
}
