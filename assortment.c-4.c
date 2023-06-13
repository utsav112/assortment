#include<stdio.h>

main()
{
	int i,j;
	int a[3][3] = {{11,12,13},{14,15,16},{17,18,19}};
	int b[3][3] = {{21,22,23},{24,25,26},{27,28,29}};	
    int c[9][9];				   		   

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

    printf("\naddition of array = \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
