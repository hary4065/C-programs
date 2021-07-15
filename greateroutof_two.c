#include <stdio.h>
int main()
{
    int x, y;
    printf("Finding Greater number out of two\n");
    printf("Enter two number : ");
    scanf("%d %d", &x, &y);
    if (x == y)
        printf("Both are equal");
    else
        printf("Greater Number is %d", x > y ? x : y);
}