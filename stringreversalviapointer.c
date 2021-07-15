#include <stdio.h>
#include <string.h>
#include <conio.h>
char *reverse(char *p);
int main()
{
    int x;
    char c[] = "ghytfdercvtbhujnmkli";
    x = strlen(c);
    printf("\nAfter  : %s", reverse(c));
    getch();
}
char *reverse(char *p)
{
    int i = 0, l;
    char t;
    for (l = 0; *(p + l) != '\0'; l++)
        ;
    printf("Length of string is %d\n", l);
    printf("Before : %s", p);
    for (i = 0; i < l / 2; i++)
    {
        t = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = t;
    }
    return p;
}
