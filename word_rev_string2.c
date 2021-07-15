#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Word
{
    char word[20];
};
int count_words(char *p)
{
    int count = 0;
    for (int i = 0; p[i]; i++)
        if (p[i] == ' ')
            count++;
    return count + 1;
}
char *delspace(char *old)
{
    int i = 0, j = 0;
    i = strlen(old);
    char *p;
    p = (char *)malloc(i + 1);
    if (p == NULL)
    {
        printf("Memory Allocation Failed");
        exit(1);
    }
    i = 0;
    while (old[i])
    {
        while (old[i] == ' ')
            i++;
        do
        {
            *(p + j++) = old[i++];
        } while (old[i] != ' ' && old[i] != '\0');
        while (old[i] == ' ')
            i++;
        if (old[i] != '\0')
            *(p + j++) = ' ';
        if (old[i] == '\0')
            *(p + j) = '\0';
    }
    strcpy(old, p);
    free(p);
    return old;
}
char *reverse(char *s)
{
    struct Word *ptr;
    ptr = (struct Word *)calloc(count_words(s), sizeof(struct Word));
    int i = 0, j = 0, k = 0;
    while (*(s + i))
    {
        while (*(s + i) != ' ' && *(s + i) != '\0')
            ptr[k].word[j++] = *(s + i++);
        if (*(s + i) == ' ')
            i++;
        ptr[k].word[j] = '\0';
        k++;
        j = 0;
    }
    k--;
    while (k + 1)
    {
        for (int i = 0; ptr[k].word[i]; i++)
            s[j++] = ptr[k].word[i];
        if (k > 0)
            s[j++] = ' ';
        else
            s[j] = '\0';
        k--;
    }
    free(ptr);
    return s;
}
int main()
{
    char old[100];
    printf("Enter a string.\n");
    gets(old);
    printf("\nString after removing extra space is\n\"%s\"", delspace(old));
    printf("\nReversed string is\n\"%s\"", reverse(old));
}