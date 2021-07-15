#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Word
{
    char word[20];
};
int main()
{
    struct Word x, *ptr;
    ptr = &x;
    for (int i = 0; i < 10; i++)
        scanf("%c", &ptr->word[i]);
    for (int i = 0; i < 10; i++)
        printf("%d=%c\n", i, ptr->word[i]);
}