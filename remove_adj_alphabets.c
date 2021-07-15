#include <stdio.h>
int deldup(char *str)
{
    int i, j;
    while (str[i])
    {
        while (str[j] == str[i])
            j++;
        str[++i] = str[j];
        j++;
    }
    printf("\nOld String Length is %d", j - 1);
    printf("\nString Length is %d", i);
    return str;
}
int main()
{
    char str[32];
    int i = 0, j = 1;
    printf("Enter a string.\n");
    gets(str);
    printf("\nNew string is %s", deldup(str));
}