#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int i,n,m,*A,*B,*C;
    printf("Enter the number of elements in first array\n");
    scanf("%d",&n);
    A = (int *)malloc(n * sizeof(int));
    printf("Enter the value of elements\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",A+i);
	}
	printf("Enter the number of elements in second array\n");
	scanf("%d",&m);
	B = (int *)malloc(m * sizeof(int));
	printf("Enter the value of elements\n");
	for(i=0;i<m;i++){
	    scanf("%d",B+i);
	}
	C = (int *)malloc((n+m)*sizeof(int));
	int k=0,j=0;
	for(i=0;i<(n+m);i++)
	{
	    if(A[j] < B[k])
	    {
	        C[i] = A[j++];
	    }
	    else
	    {
	        C[i]=B[k++];
	    }
	}
	for(i=0;i<(n+m);i++)
	{
		printf("%d ",C[i]);
	}
	int a = m+n;
	if(a%2==0)
	{
	    a=a/2;
	    a=C[a-1]+C[a];
	    a=ceil(a/2.0);
	    printf("Median is of the two sorted array is %d",a);
	}
	else
	{
	    printf("Median is of the two sorted array is %d",C[a/2]);
	}
	return 0;
}
