#include <stdio.h>
int main()
{
    extern int x;
    printf("Value of extern variable x is %d\n", x);
}
int x = 54;
