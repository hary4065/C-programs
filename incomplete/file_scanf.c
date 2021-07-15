#include <stdio.h>
main()
{
    FILE *fp;
    int a, b, c;
    fp = fopen("data2.txt", "r");
    printf("sum of number is ");
    fscanf(fp, "%d.%d", &a, &b);
    printf("%d %d", a, b);
}
