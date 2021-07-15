#include <stdio.h>
#include <stdlib.h>
struct data
{
    int info;
    struct data *link;
};

int main()
{
    struct data *start = NULL;
    start = (struct data *)malloc(sizeof(struct data));
    start->link = null;
}