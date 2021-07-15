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
    printf("%3d", n);
    if (--n)
        print(n);
}