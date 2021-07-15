#include<stdio.h>
main()
{
    char ch[200];
    FILE *fp;
    fp=fopen("f1.txt","w+");
    printf("Enter string\n");
    gets(ch);
    fputs(ch,fp);
}
