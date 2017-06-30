#include<stdio.h>
#include<stdlib.h>
int lcs(int *A, int *B, int n)
{
    int i,j;
    int **arr;
    arr=(int **)calloc((n+1),sizeof(int *));
    for(i=0;i<=n;i++)
    {
        *(arr+i) = (int *)calloc((n+1),sizeof(int));
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(A[i-1] == B[j-1])
            {
                arr[i][j] = 1 + arr[i-1][j-1];
            }
            else
            {
                arr[i][j] = arr[i-1][j]>arr[i][j-1]?arr[i-1][j]:arr[i][j-1];
            }
        }
    }
    return arr[i-1][j-1];
}

int main()
{
    int n,i,m,j;
    int *A,*B,*C;
	printf("Enter the number of events:\n");
	scanf("%d",&n);
	printf("Enter the Correct order of events:\n");
	A=(int *)malloc(n*sizeof(int));
	B=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
    	scanf("%d",(A+i));
    printf("Enter the number of students:\n");
    scanf("%d",&m);
    C=(int *)malloc(n*sizeof(int));
    for(i=0;i<m;i++)
    {
        printf("Enter the order of events entered by student %d.\n",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",(B+j));
        }
        C[i] = lcs(A,B,n) ;
    }
    for(i=0;i<m;i++)
    {
        printf("The score of student %d is %d.\n",i+1,C[i]);
    }
	return 0;
}
