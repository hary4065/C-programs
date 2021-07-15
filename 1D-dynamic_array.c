#define NULL '\0'
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int n, i;
    printf("Enter how many integers needed:");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("unable to alllocate memory.\n exiting peogram...");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Next Number:");
        scanf("%d", p + i);
    }
    printf("content of array:");
    for (i = 0; i < n; i++)
        printf("%4d", *(p + i));
    printf("\n");
    free(p);

    return 0;
}
