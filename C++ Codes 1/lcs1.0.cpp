#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
  /*-------Fill your code here-------------*/
  int **A;
  int i,j;
  A= (int **)calloc((m+1),sizeof(int *));
  for(i=0;i<=m;i++)
  {
      *(A+i) = (int *)calloc((n+1),sizeof(int));
  }
  for(i=1;i<=m;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(X[i-1] == Y[j-1])
          {
              A[i][j] = 1 + A[i-1][j-1];
          }
          else
          {
              A[i][j] = A[i-1][j]>A[i][j-1]?A[i-1][j]:A[i][j-1];
          }
      }
  }
  return A[i-1][j-1];
}

/* Driver program to test above function */
int main()
{
  char X[100];
  char Y[100];
  
  printf("Enter string 1\n");
  scanf("%s",X);
  
  printf("Enter string 2\n");
  scanf("%s",Y);
  
  int m = strlen(X);
  int n = strlen(Y);
  
  printf("Length of Longest Common Subsequence is %d\n", lcs( X, Y, m, n ) );
  
  return 0;
}
