#include <stdio.h>
int swap1(int *p, int *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    return 0;
}
int swap2(int *p, int *q)
{
    *p = *p ^ *q ^ (*q = *p);
    return 0;
}
int main()
{
    int a, b;
    printf("Enter Two number.\n");
    scanf("%d %d", &a, &b);
    printf("Before swap : a= %d, b=%d\n", a, b);
    swap1(&a, &b);
    printf("After swap : a= %d, b=%d\n", a, b);
    swap2(&a, &b);
    printf("Swapping again : a= %d, b=%d\n", a, b);
}
