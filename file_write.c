#include<stdio.h>
struct book {
    int bookid;
    char title[20];
    float price;
};
main(){
    struct book b1;
    FILE *fp;
    char st[20];
    fp=fopen("f1.txt","ab");
   /* while(fgets(st,9,fp)!=NULL)
        printf("%s",st);
    printf("%d",sizeof b1);   */
    printf("Enter bookid, title and price of book.\n");
    scanf("%d ", &b1.bookid);
    gets(b1.title);
    fflush(stdin);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}
