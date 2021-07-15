#include <stdio.h>
int main()
{
    FILE *fp;
    int a, b, c;
    fp = fopen("Data1.txt", "a");
    printf("Enter two number.\n");
    scanf("%d%d", &a, &b);
    printf("#Characters written is %d", fprintf(fp, "%d\n", a));
    printf("\n#Characters written is %d", fprintf(fp, "%d", b));
}
