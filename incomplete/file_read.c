#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct book b1;
    FILE *fp;
    fp = fopen("Data3.txt", "r+");
    if (fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    printf("%d\n", fread(&b1, sizeof b1, 1, fp));
    // printf("%d  %s %f\n", b1.bookid, b1.title, b1.price);
    getch();
    fclose(fp);
}
