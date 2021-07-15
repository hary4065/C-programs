#include<string.h>
struct NAME
{
    int roll;
    char name[20];
};
int main()
{
    struct NAME *ptr,sp;
    ptr=&sp;
    sp.roll=65;
    printf("Enter name;\n");
    scanf("%[^\n]s",&ptr->name);
    printf("%s",ptr->name);
}
