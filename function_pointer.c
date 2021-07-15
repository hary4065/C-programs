#include <stdio.h>
int f1(void);
int main()
{
    int (*p)(); //pointer to function
    p = &f1;
    printf("%d", p());
}
int f1()
{
    printf("function is called ");
}
