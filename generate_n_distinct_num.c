#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[10], temp, i, j, min = 10, max = 19;
    srand(time(0));
    for (i = 0; i <= 9; i++)
    {
        temp = rand() % 10 + min;
        for (j = 0; j < i; j++)
        {
            if (temp == a[j])
                break;
        }
        if (j == i)
            a[i] = temp;
        else
            i--;
    }
    for (i = 0; i < 10; i++)
        printf("%5d ", a[i]);
}
