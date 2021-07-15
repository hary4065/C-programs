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
    return p;
}
char *reverse(struct Word *ptr, char *s)
{
    char temp[20], *q;
    int i = 0, j, k = 0;
    while (*(s + i))
    {
        j = 0;
        while (*(s + i) != ' ' && *(s + i) != '\0')
            temp[j++] = *(s + i++);
        if (*(s + i) == ' ')
            i++;
        temp[j] = '\0';
        strcpy(ptr[k].word, temp);
        k++;
    }
    q = (char *)malloc(strlen(s) + 1);
    *(q + 0) = '\0';
    k--;
    while (k)
    {
        strcat(q, ptr[k].word);
        strcat(q, " ");
        k--;
    }
    strcat(q, ptr[0].word);
    return q;
}
int main()
{
    char *p, old[] = "  my  name";
    int nw;
    struct Word *ptr;
    ptr = (struct Word *)calloc(count_words(old), sizeof(struct Word));
    strcpy(old, delspace(old));
    strcpy(old, reverse(ptr, old));
    printf("\nReversed string is\n\"%s\"", reverse(ptr, old));
    printf("\nReversed string is\n\"%s\"", old);
}