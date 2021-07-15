#include <stdio.h>
#include <stdlib.h>
main()
{
    char ch[20];
    FILE *fp;
    fp = fopen("Data.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    while (fgets(ch, 20, fp) != NULL)
        printf("%s", ch);
    printf("\noutput printed");
}
