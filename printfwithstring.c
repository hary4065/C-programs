#include <stdio.h>
int main()
{
    int x = 67;
    //static int y=x; error
    static int y;
    y = x;
    printf("first %d %d %d", "hel", y, x); // string constant "hel" address is passed to first placeholder
}
