#include<stdio.h>
#include<stdlib.h>

int coinchange(int *arr, int n, int c)
{
    int i,j;
    int **A;
    A=(int **)calloc(n,sizeof(int *));
    for(i=0;i<n;i++)
    {
        *(A+i)=(int *)calloc((c+1),sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        A[i][0]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==0)
            {
                if(j == arr[i])
                {
                    A[i][j] = 1;
                }
                else if (j > arr[i])
                {
                    A[i][j] = A[i][j-arr[i]];
                }
            }
            else
            {
                if(j >= arr[i])
                {
                    A[i][j] = A[i][j-arr[i]] + A[i-1][j];
                }
                else
                {
                    A[i][j] = A[i-1][j];
                }
            }
        }
    }
    
    return A[i-1][j-1];
}

int main()
{
    int n,i,c;
    int *arr;
	printf("Enter the number of cointypes:\n");
	scanf("%d",&n);
	arr= (int *)malloc(n*sizeof(int));
	printf("Enter the value of each coins:\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",(arr+i));
	}
	printf("Enter the value of amount that you have to convert into coins:\n");
	scanf("%d",&c);
	printf("The total no of possible coin set is %d.",coinchange(arr,n,c));
	return 0;
}
