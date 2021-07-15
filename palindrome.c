#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[20];
    int len, i = 0, j;
    printf("Enter a string.\n");
    scanf("%[^\n]s", str);
    while (str[i] != '\0')
        i++;
    //printf("%d", i);
    for (j = 0; j < i / 2; j++)
        if (str[j] != str[i - j - 1])
        {
            printf("String is not palindrome.\n");
            exit(0);
        }
    printf("String is palindrome.\n");
}