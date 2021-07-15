#include <stdio.h>
#include <string.h>
int main()
{
    char c[30], v[] = "aeiouAEIOU";
    int count = 0;
    printf("Enter a string\n");
    gets(c);
    for (int i = 0; c[i]; i++)
        for (int j = 0; v[j]; j++)
            if (c[i] == v[j])
                count++;
    printf("Number of vowels is %d", count);
}