#include <stdarg.h>
#include <stdio.h>
int sum(int count, ...)
{
    int s = 0;
    va_list ap;
    va_start(ap, count);
    for (int i = 0; i < count; i++)
        s += va_arg(ap, int);
    va_end(ap);
    return s;
}
int main()
{
    printf("Sum is %2d.\n", sum(5, 1, 2, 3, 4, 5));
    return 0;
}
