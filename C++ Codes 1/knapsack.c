	// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    return a>b?a:b;
}
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int *wt, int *val, int n)
{
     /*-------------Fill your code here---------*/
     int **A=(int **)calloc(n,sizeof(int));
     int i,j;
     for(i=0;i<n;i++)
     {
         *(A+i) =(int *)calloc(W+1,sizeof(int));
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<W+1;j++)
         {
             if(j==0)
             {
                 A[i][j] = 0;
             }
             else if(i==0)
             {
                 if(j>=wt[0])
                 A[i][j] =val[0];
             }
             else if( j < wt[i])
             {
                 A[i][j] = A[i-1][j];
             }
             else
             {
                 A[i][j] = max((val[i] + A[i-1][j-wt[i]]),A[i-1][j]);
             }
         }
     }
 /*    for(i=0;i<n;i++)
     {
         for(j=0;j<=W;j++)
         {
             printf("%d ",A[i][j]);
         }
         printf("\n");
     }*/
     return A[n-1][W];
}
 
int main()
{
    int *val,*wt,W,n,i;
    printf("Enter the number of items\n");
    scanf("%d",&n);
    val = (int*)malloc(sizeof(int)*n);
    wt = (int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++){
		printf("Enter the weight and profit of item %d\n",i+1);
		scanf("%d%d",wt+i,val+i);
	}
    printf("Enter the capacity of the Knapsack\n");
    scanf("%d",&W);
    
    printf("The maximum profit that can be obtained from the knapsack is %d\n", knapSack(W, wt, val, n));
    return 0;
}
