#include <stdio.h>
#include <stdlib.h>
main()
{
    char ch;
    FILE *fp;
    fp = fopen("Data.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    ch = fgetc(fp);
    while (!feof(fp))
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    printf("\noutput printed");
}
