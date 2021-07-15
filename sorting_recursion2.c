#include <stdio.h>
void sort(int *a, int L);
int getMaxIndex(int *a, int L);
void sort(int *a, int L)
{

    int maxIndex, t;
    if (L > 1)
    {
        maxIndex = getMaxIndex(a, L);
        t = a[L - 1];
        a[L - 1] = a[maxIndex];
        a[maxIndex] = t;
        sort(a, L - 1);
    }
}
int getMaxIndex(int *a, int L)
{
    int max = a[0], i, MaxIndex = 0;
    for (int i = 1; i < L; i++)
        if (max < a[i])
        {
            max = a[i];
            MaxIndex = i;
        }
    return MaxIndex;
}
int *print(int *n, int j)
{
    for (int i = 0; i < j; i++)
        printf("%3d ", n[i]);
}
int main()
{
    int L, A[] = {48, 65, 54, 46, 95};
    L = sizeof(A) / sizeof(int);
    sort(A, L);
    print(A, L);
}