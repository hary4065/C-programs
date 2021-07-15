#include <stdio.h>
#include <stdlib.h>
struct student
{
    int info;
    struct student *link;
};
int *createnode()
{
    start = (struct student *)malloc(sizeof(struct student));
    start - > link = null;
}

int main()
{
    struct student *start = NULL;

    int a, b, c;
    printf("Enetr three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("\nGreatest is %d", a);
    else if (b >= c)
        printf("\nGreatest is %d", b);
    else
        printf("\nGreatest is %d", c);
}