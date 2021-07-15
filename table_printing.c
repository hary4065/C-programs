#include <stdio.h>
#include <conio.h>
void tabledisplay(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    tabledisplay(n);
}
void tabledisplay(int n)
{
    for (int i = 1; i < 11; i++)
        printf("%d * %2d = %2d\n", n, i, n * i);
}