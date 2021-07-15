#include <stdio.h>
int main()
{

    int p[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int(*q)[4] = p;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%10d=", &p[j][k]);       //subscripting method
            printf("%d=", *(*(p + j) + k));  //using array name
            printf("%d\n", *(*(q + j) + k)); //using 1D-pointer array
        }
        printf("\n");
    }
}
