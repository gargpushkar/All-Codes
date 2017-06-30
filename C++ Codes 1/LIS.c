/* Dynamic Programming implementation of LIS problem */
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
 
/* lis() returns the length of the longest increasing subsequence in arr[] of size n */
int lis( int arr[], int n )
{
     /*---------Fill your code here---------*/
     int a[n],max;
     int i=0,j=0;
     for(;i<n;i++)
        a[i] = 1;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j] < arr[i])
            {
                a[i] = a[i]>(a[j]+1)?a[i]:(a[j]+1);
            }
        }
    }
    max = a[0];
    for(i=1;i<n;i++)
    {
        if(  max < a[i])
            max = a[i];
    }
    return max;
}
 
int main()
{
  int *arr,n,i;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  arr = (int*)malloc(sizeof(int)*n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++){
	  scanf("%d",arr+i);
  }
  printf("Length of Longest Increasing SubSequence is %d\n", lis( arr, n ) );
  return 0;
}
