#include <stdio.h>
int main()
{
    printf("\x61");
    printf("\n");
    putchar(97);
    printf("\n");
    putch(97);
    printf("\n");
    char *p, c = 97;
    p = &c;
    puts(p);
}