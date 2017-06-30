#include<stdio.h>
#include<stdlib.h>
 
/* A utility function to print solution */
void printSolution(int **board, int N)
{
    printf("The solution is\n");
	int i,j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }
}
 
/* A utility function to check if a queen can be placed on board[row][col]
   Note that this function is called when "col" queens are already placeed
   in columns from 0 to col -1. So we need to check only left side for
   attacking queens */
int isSafe(int **board,int N, int row, int col)
{
   /*--------------Fill your code here----------*/
   int i,j;
   for(i=0;i<col;i++)
       if(board[row][i])
           return 0;
   for(i=row,j=col;i>=0&&j>=0;i--,j--)
        if(board[i][j])
            return 0;
    for(i=row,j=col;j>=0&&i<N;i++,j--)
        if(board[i][j])
            return 0;
    return 1;
}
 
/* A recursive utility function to solve N Queen problem */
int solveNQUtil(int **board,int N, int col)
{
    int i;
	/*-----------Fill your code here-------*/
	if(col>=N) 
	    return 1;
	for(i=0;i<N;i++)
	{
	    if(isSafe(board,N,i,col))
	    {
	        board[i][col]=1;
	        if(solveNQUtil(board,N,col+1))
	            return 1;
	        board[i][col]=0;
	    }
	}
	return 0;
}
 
/* This function solves the N Queen problem using Backtracking.  It mainly uses
solveNQUtil() to solve the problem. It returns false if queens cannot be placed,
otherwise return true and prints placement of queens in the form of 1s. Please
note that there may be more than one solutions, this function prints one of the
feasible solutions.*/
int solveNQ(int N)
{
	/*---------Fill your code here-------*/
	int **board;
	int i,j;
	board = (int **)malloc(N*sizeof(int *));
    for(i=0;i<N;i++)
    {
        *(board+i) = (int *)malloc(N*sizeof(int ));
    }
	for(i=0;i<N;i++)
	    for(j=0;j<N;j++)
	        board[i][j]=0;
	        
	solveNQUtil(board,N,0);
	
	printSolution(board,N);
	return 1;
}
 
int main()
{
	int N;
    printf("Enter the size of the board\n");
    scanf("%d",&N);
    solveNQ(N);
    return 0;
}
