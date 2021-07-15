#include <stdio.h>
void sort(int *n, int L)
{

    int max = 0;
    for (int i = max + 1; i < L; i++)
        if (n[max] < n[i])
            max = i;
    if (max != L - 1)
        n[L - 1] = n[L - 1] ^ n[max] ^ (n[max] = n[L - 1]);
    if (L > 1)
        sort(n, L - 1);
}
int *print(int *n, int j)
{
    for (int i = 0; i < j; i++)
        printf("%3d ", n[i]);
}
int main()
{
    int L, A[] = {54, 6, 945, 45, 478, 798, 978, 46, 87, 78, 79, 7, 56};
    L = sizeof(A) / sizeof(int);
    sort(A, L);
    print(A, L);
}