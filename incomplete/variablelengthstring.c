#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
char *inputstring();
int main()
{
    char *p;
    printf("Enter a string\n");
    p = inputstring();
    printf("\nString is %s", p);
}
char *inputstring()
{
    char *p, ch, *q;
    int i, len = 1;
    p = (char *)malloc(len);
    ch = getche();
    *p = ch;
    do
    {
        q = (char *)malloc(len + 1);
        for (i = 0; i < len; i++)
            *(q + i) = *(p + i);
        *(q + i) = '\0';
        free(p);
        p = (char *)malloc(len);
        for (i = 0; i < len; i++)
            *(p + i) = *(q + i);
        free(q);
        ch = getche();
        *(p + len - 1) = ch;
    } while (ch != '\n');
    q = (char *)malloc(len);
    for (i = 0; i < len; i++)
        *(q + i) = *(p + i);
    *(q + i - 1) = *(p + i);
    return q;
}