#include <stdio.h>

int main() 

{

    int a[100],n,i,f,s;

    printf("Enter size of array");
    scanf("%d",&n);

    for (i=0;i<n;i++) 
	{
    	printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }

    if (a[0] > a[1])
	 {   
        f = a[0];
        s = a[1];
    }
	else
	{
        f =a[1];
        s=a[0];
	}

    printf("s largest number is  = ");
    
    for(i=2;i<n;i++) 
	{
        if (a[i]>s)
		{
        	s=f;
        	f=a[i];
	    }
        else if(s<a[i])
		{
            s=a[i];
        } 
    }
    printf("%d",s);
}
