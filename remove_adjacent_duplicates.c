#include <stdio.h>
char *deladjdup(char *s)
{
    int i, j;
    for (i = 0; s[i]; i++)
    {
        if (s[i] == s[i + 1])
        {
            for (j = i; s[j]; j++)
                s[j] = s[j + 1];
            i--;
        }
    }
    return s;
}
int main()
{
    char s[] = "aaabbbccddff";
    printf("%s", deladjdup(s));
}