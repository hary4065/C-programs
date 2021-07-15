#include <stdio.h>
int *fun()
{
    int k = 35;
    return &k;
}
int main()
{
    int *j;
    int *fun();
    j = fun();
    printf("\n %d", *j);
}
