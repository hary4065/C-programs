#include <stdio.h>
int main()
{
    int A[] = {12, 212, 45, 46, 9, 979, 4, 98, 4, 5, 879, 56, 56, 3}, min = A[0];
    for (int i = 1; i < sizeof(A) / 4; i++)
        if (min > A[i])
            min = A[i];
    printf("Minimum number is %d", min);
}