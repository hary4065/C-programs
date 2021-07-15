#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, row;
    printf("Enter height of pyramid : ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }

    return 0;
}
