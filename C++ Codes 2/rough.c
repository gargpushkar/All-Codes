#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *A;
	int i,n;
	scanf("%d",&n);
	A=(int *)calloc(1000000,(sizeof(int)));
	for(i=0;i<n;i++)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    A[a]++;
	    A[b]++;
	}
	for(i=0;i<1000000;i++)
	{
	    if((A[i] & 1) != 0)
	    {
	        printf("No");
    	    return 0;
	    }
	}
	printf("Yes");
	return 0;
}
