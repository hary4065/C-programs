#include <stdio.h>
int powt(int i, int j)
{
    int sum = 1;
    for (int k = 0; k < j; k++)
        sum *= i;
    return sum;
}
int main()
{
    int x, sum = 0, i = 0;
    printf("Binary To decimal Conversion\n");
    printf("Enter Binary number : ");
    scanf("%d", &x);
    while (x)
    {
        sum += (x % 10) * powt(2, i++);
        x /= 10;
    }
    printf("Decimal Number is %d", sum);
}