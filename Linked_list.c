#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start;
struct node *createnode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}
void insertnode()
{
    struct node *temp, *t;
    temp = createnode();
    printf("Enter a number : ");
    scanf("%d", &temp->info);
    temp->link = NULL;
    if (start == NULL)
        start = temp;
    else
    {
        t = start;
        while (t->link != NULL)
            t = t->link;
        t->link = temp;
    }
}
void deletenode()
{
    struct node *r;
    if (start == NULL)
        printf("List is already empty.\n");
    else
    {
        r = start;
        start = start->link;
        free(r);
    }
}
void viewlist()
{
    struct node *t;
    if (start == NULL)
        printf("List is empty.\n");
    else
    {
        t = start;
        printf("Content in List : ");
        while (t != NULL)
        {
            printf("%5d", t->info);
            t = t->link;
        }
    }
}
int menu()
{
    int ch;
    printf("\nEnter your choice.");
    printf("\n1: Add value to the list");
    printf("\n2: Delete first Value");
    printf("\n3: View list");
    printf("\n4: Exit Program\n");
    scanf("%d", &ch);
    return ch;
}
int main()
{
    while (1)
        switch (menu())
        {
        case 1:
            insertnode();
            break;
        case 2:
            deletenode();
            break;
        case 3:
            viewlist();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Entery");
        }
    getch();
}