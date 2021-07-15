#include <stdio.h>
#include <stdlib.h>
void rotate(int *, char, int);
int main()
{
    int r, i, A[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    char dir;
    printf("Enter Number of rotation and direction (R/L) respectively.\n");
    scanf("%d %c", &r, &dir);
    if (dir == 'R' || dir == 'r' || dir == 'L' || dir == 'l')
    {
        printf("Before Rotation\n");
        for (i = 0; i < 10; i++)
            printf("%4d ", A[i]);
        rotate(A, dir, r);
        printf("\nAfter Rotation\n");
        for (i = 0; i < 10; i++)
            printf("%4d ", A[i]);
    }
    else
    {
        printf("Invalid direction.");
        exit(0);
    }
}
void rotate(int *p, char c, int n)
{
    int temp, i;
    while (n--)
        if (c == 'r' || c == 'R')
        {
            temp = *(p + 9);
            for (i = 9; i >= 0; i--)
                *(p + i) = *(p + i - 1);
            *p = temp;
        }
        else
        {
            temp = *p;
            for (i = 0; i <= 9; i++)
                *(p + i) = *(p + i + 1);
            *(p + i - 1) = temp;
        }
}