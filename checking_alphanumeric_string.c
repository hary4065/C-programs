#include <stdio.h>
int main()
{
    int x, a = 0, d = 0;
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]s", &str);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            d = 1;

        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            a = 1;
        if (a && d)
        {
            printf("String is alphanumeric.\n");
            return;
        }
    }
    printf("String is Not alphanumeric.\n");
}