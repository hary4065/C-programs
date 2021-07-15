#include <stdio.h>
struct student inputdata();
void showdata(struct student s);
struct student
{
    int rollno;
    char name[20];
    int age;
};
int main()
{
    struct student s1;
    s1 = inputdata();
    showdata(s1);
}
struct student inputdata()
{
    struct student s;
    printf("Enter student RollNo, Name and Age\n");
    scanf("%d", &s.rollno);
    fflush(stdin);
    gets(s.name);
    scanf("%d", &s.age);
    return s;
}
void showdata(struct student s)
{
    printf("RollNo Name         Age\n");
    printf("%6d %-12s %d\n", s.rollno, s.name, s.age);
}