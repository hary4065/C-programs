#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i;
    printf("Enter how many integers needed:");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL)
    {
        printf("Unable to alllocate memory.\n exiting peogram...");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Next Number:");
        scanf("%d", p + i);
    }
    printf("Content or array:");
    for (i = 0; i < n; i++)
        printf("%5d", *(p + i));

    int new = n + 3;
    p = (int *)realloc(p, new * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to alllocate memory.\n exiting peogram...");
        exit(1);
    }

    *(p + n) = 10;
    *(p + n + 1) = 20;
    *(p + n + 2) = 65;
    printf("\nNew content or array:");
    for (i = 0; i < new; i++)
        printf("%4d", *(p + i));
    free(p);

    return 0;
}
