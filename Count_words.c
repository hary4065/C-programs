#include <stdio.h>
int main()
{
    int i = 0, j, count = 0;
    char s[100];
    printf("Enter a string.\n");
    gets(s);
    while (s[i])
        i++;
    for (j = 0; j < i; j++)
        if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
            count++;
    printf("number of words are %d\n", count);
}