#include <stdio.h>
int main()
{
    int y;
    printf("Enter year number : ");
    scanf("%d", &y);
    if (y % 4)
        printf("Not a Leap Year");
    else if (y % 100)
        printf("A Leap Year");
    else if (y % 400)
        printf("Not a Leap Year");
    else
        printf("A Leap Year");
}