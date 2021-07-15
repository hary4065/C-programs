#include <stdio.h>
#include <stdlib.h>
struct node *CreateList(struct node *last);
struct node *AddToEmpty(struct node *last, int value);
struct node *AddAtEnd(struct node *last, int value);
struct node *AddAfter(struct node *last, int value, int item);
struct node *Delete(struct node *last, int value);
struct node *AddAtBeg(struct node *last, int value);
void Display(struct node *last);
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *last = NULL;
    int choice, value, item;
    while (1)
    {
        system("cls");
        printf("1: Create Circular Link.List.\n");
        printf("2: Display Link.List.\n");
        printf("3: Add To Empty Link.List.\n");
        printf("4: Add To Beginning in Link.List.\n");
        printf("5: Add At End of the Link.List.\n");
        printf("6: Add After Some Item's Value.\n");
        printf("7: Delete from Link.List.\n");
        printf("0: Exit the program.\n");
        printf("Enter your Choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            last = CreateList(last);
            break;
        case 2:
            Display(last);
            getch();
            break;
        case 3:
            printf("Last Data of Link.List will be erased.\n");
            printf("Enter First number for the list : ");
            scanf("%d", &value);
            last = AddToEmpty(last, value);
            break;
        case 4:
            printf("Enter a number for the list : ");
            scanf("%d", &value);
            last = AddAtBeg(last, value);
            break;
        case 5:
            printf("Enter a number for the list : ");
            scanf("%d", &value);
            last = AddAtEnd(last, value);
            break;
        case 6:
            printf("Enter value to insert in Link.List : ");
            scanf("%d", &value);
            printf("Enter a item value after which new value is to be inserted : ");
            scanf("%d", &item);
            last = AddAfter(last, value, item);
            break;
        case 7:
            printf("Enter value to be deleted : ");
            scanf("%d", &value);
            last = Delete(last, value);
            break;
        case 0:
            free(last);
            exit(0);
        Default:
            printf("invalid Choice");
            break;
        }
    }
}
struct node *CreateList(struct node *last)
{
    int i = 1, n, value;
    printf("How many values you want to insert : ");
    scanf("%d", &n);
    printf("Enter First value for list : ");
    scanf("%d", &value);
    last = AddToEmpty(last, value);
    while (i < n)
    {
        printf("Enter Next value for the list : ");
        scanf("%d", &value);
        last = AddAtEnd(last, value);
        i++;
    }
    return last;
}
struct node *AddToEmpty(struct node *last, int value)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = p;
    last = p;
    return last;
}
struct node *AddAtEnd(struct node *last, int value)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = last->next;
    last->next = p;
    last = p;
    return last;
}
struct node *AddAfter(struct node *last, int value, int item)
{
    struct node *p, *t;
    t = last->next;
    do
    {
        if (t->data == item)
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->data = value;
            p->next = t->next;
            t->next = p;
            if (t == last)
                last = p;
            return last;
        }
        t = t->next;
    } while (t != last->next);
    printf("%d is not in the Link.List", item);
    return last;
}
struct node *Delete(struct node *last, int value)
{
    struct node *t, *p;
    if (last == NULL)
    {
        printf("List is empty");
        return last;
    }
    else if (last == last->next && last->data == value)
    {
        t = last;
        last = NULL;
        free(t);
        return last;
    }
    else if (last->next->data == value)
    {
        t = last->next;
        last->next = t->next;
        free(t);
        return last;
    }
    p = last->next;
    while (p->next != last)
    {
        if (p->next->data == value)
        {
            t = p->next;
            p->next = t->next;
            free(t);
            return last;
        }
        p = p->next;
    }
    if (last->data == value)
    {
        t = last;
        p->next = last->next;
        last = p;
        free(t);
        return last;
    }
    printf("%d is not found");
    return last;
}
struct node *AddAtBeg(struct node *last, int value)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = last->next;
    last->next = p;
    return last;
}
void Display(struct node *last)
{
    struct node *t;
    if (last == NULL)
        printf("List is empty.\n");
    else
    {
        t = last->next;
        printf("Data of Link.List:\n");
        do
        {
            printf("%5d ", t->data);
            t = t->next;
        } while (t != last->next);
    }
}
