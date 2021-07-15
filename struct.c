#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rollno;
    char name[20];
    int age;
};
int main()
{
    struct student d1, d2 = {42, "Rahul", 19};
    //d1 = {456, "atul", 28}; // like array struct variable can only be initialised within declaration
    printf("Enter Roll No., Name, Age?\n");
    scanf("%d %s %d", &d1.rollno, &d1.name, &d1.age);
    printf("%d %s %d", d1.rollno, d1.name, d1.age);
    printf("%d ", sizeof d2);
}
