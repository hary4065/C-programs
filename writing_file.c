#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    FILE *fp;
    char s[] = "Hello there you are storing this line in file.";
    fp = fopen("Data.txt", "r+");
    if (fp == NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    for (i = 0; i < strlen(s); i++)
        fputc(s[i], fp);
    printf("String is saved to file.");
    fclose(fp);
}
