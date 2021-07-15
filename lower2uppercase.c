#include <stdio.h>
int main()
{
    char c[20];
    printf("Enter a string.\n");
    scanf("%[^\n]s", c);
    for (int i = 0; c[i] != '\0'; i++)
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] -= 'a' - 'A';
    printf("%s", c);
}