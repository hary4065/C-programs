#include <stdio.h>
int main()
{
    int i, a[10], so = 0, se = 0;
    printf("Enter 10 number;\n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
        if (a[i] % 2)
            so = so + a[i];
        else
            se = se + a[i];
    printf("\nSum of even numbers is %d.", se);
    printf("\nSum of odd numbers is %d.", so);
}