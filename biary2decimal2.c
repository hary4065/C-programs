#include <stdio.h>
int main()
{
    int res = 0, i;
    char s[100];
    printf("Binary To decimal Conversion\n");
    printf("Enter Binary number : ");
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == '0')
            res = res * 2 + 0;
        else
            res = res * 2 + 1;
    printf("Decimal Number is %d", res);
}