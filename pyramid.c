#include <stdio.h>

int main(void){
	int i,j,k,n=20;
	for(i=1;i<=n;i++)
		{ for(j=1;j<=n-i;j++)
			printf(" ");
				for(k=1;k<2*i;k++)
					printf(".");
		printf("\n");}
	return 0;
}