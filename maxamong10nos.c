#include <stdio.h>
int main()
{
	int arr[100],n,i,j,t;
	printf("enter total no of values");
	scanf("%d",&n);
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
            for(i=0;i<n;i++)
            {
            	for(j=0;j<n;j++)
            	{
            		if(arr[i]>arr[j])
            		{
            			t=arr[i];
            			arr[i]=arr[j];
            			arr[j]=t;
            		}
            	}
            }
	 printf("\n largest is %d ",arr[0]);
	return 0;
}
