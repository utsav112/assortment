#include<stdio.h>

main()
{
	int i,j,sum=0;
	int a[3][3] = {{1,2,3},
	               {4,5,6},
				   {7,8,9}};

	for(i=0;i<3;i++)
	{ 
        for(j=0;j<3;j++)
		{
            if(i==j)
			{
              sum = sum +a[i][j];    
			}
        } 
    }
    printf("diagonal sum of 2D array = %d",sum);
}
