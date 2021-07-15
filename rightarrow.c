#include<stdio.h>
#include<stdbool.h>
int main()
{
    int i,j,row,half,k=0;
    printf("Enter a number.\t");
    scanf("%d",&row);
    bool n;
    n=(row%2==0);
    half=(row+1)/2;
    for (i=1; i<=row ; i++)
        {
            if(n)
                {
                    if(i<=half ) k++;
                    if( i>half+1) k--;
                }
            else
                i<=half?k++:k--;
            for (j=1; j<=half; j++)
                {
                    if (j<=k)
                        printf("*");
                    else
                        printf(" ");
                }
            printf("\n");
        }
}

