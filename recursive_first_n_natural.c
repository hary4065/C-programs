#include <stdio.h>
void print(int n);
int main()
{
    int n;
    printf("How many first Natural Number : ");
    scanf("%d", &n);
    print(n);
}
void print(int n)
{
    static int i = 1;
    if (i != n)
        print(n - 1);
    printf("%3d", i++);
}