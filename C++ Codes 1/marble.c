#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,q,t;
	int *A;
	printf("Enter the number of marbles and queries\n");
	scanf("%d%d",&n,&q);
	A = (int *)malloc(n*sizeof(int));
	printf("Enter the value for marbles\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",A+i);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
	        if(A[j] > A[j+1])
	        {
    	        t = A[j];
    	        A[j] = A[j+1];
    	        A[j+1]=t;
	        }
	    }
	}
	for(i=0;i<n;i++)
	{
	    printf("%d ",*(A+i));
	}
	printf("Enter the value for queries\n");
	for(i=0;i<q;i++)
	{
	    int a;
	    scanf("%d",&a);
	    for(j=0;j<n;j++)
	    {
	        if(a==A[j])
	        {
	            printf("%d found at %d \n",a,j+1);
	            break;
	        }
	        else if( A[j] > a)
	        {
	            printf("%d not found\n",a);
	            break;
	        }
	    }
	}
	return 0;
}

