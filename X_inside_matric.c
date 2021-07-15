#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row;
    printf("Enter degree of matrix : ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == j)
                printf("\\");
            else if ((i + j) == (row+1))
                printf("\/");
            else
                printf("\*");
        }
        printf("\n");
    }
    return 0;
}
