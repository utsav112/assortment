#include<stdio.h>

main()

{
	int i,j,last,n=2,a[]={1,2,3,4,5,6,7};
	
	int len = sizeof(a)/sizeof(a[0]);

	printf("size of array = \n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}

	for(i=0;i<n;i++)
	{
		last=a[len-1];

		for(j=len-1;j>0;j--)
		{
		    a[j]=a[j-1];
		}
		a[0]=last;
	}
	printf("\n");

	printf("Rotation array = \n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
}
