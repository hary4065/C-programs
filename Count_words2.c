#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display(char *);
char *delspace(char *, int);
int countwords(char *);
int main()
{
    int i = 0, j, count = 0;
    char s[100];
    printf("Enter a string.\n");
    gets(s);
    while (s[i])
        i++;
    printf("%d\n", i);
    strcpy(s, delspace(s, i));
    i = 0;
    while (s[i])
        i++;
    printf("%d\n", i);
    printf("Number of words is %d", countwords(s));
}
void display(char *s)
{
    int i = 0;
    while (s[i])
        printf("%c", s[i++]);
}
char *delspace(char *s, int i)
{
    int j = 0;
    char *p;
    p = malloc(i + 1);
    i = 0;
    while (*(s + i))
    {
        while (*(s + i) == ' ')
            i++;
        while (*(s + i) != ' ' && *(s + i) != '\0')
            *(p + j++) = *(s + i++);
        if (*(s + i) == '\0' && *(p + j - 1) == ' ')
            j--;
        *(p + j++) = *(s + i);
    }
    return p;
}
int countwords(char *s)
{
    int i = 0, count = 0;
    while (*(s + i))
    {
        if (*(s + i) == ' ')
            count++;
        i++;
    }
    return count + 1;
}