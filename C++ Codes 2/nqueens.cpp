#include<iostream>
using namespace std;
int n=4;
void printSolution(int board[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
}

bool isValid(int rows, int cols,int arr[][])
{
	int i,j;
	for(i=0;i<cols;i++)
		if(arr[rows][i])
			return false;
	for(i=rows;i=cols;i>=0 && j>= 0 ; i--;j--)
		if(arr[i][j])
			return false;
	for(i=rows;j=cols;j>=0 && i<n;i++;j--)
		if(arr[i][j])
			return false;
	return true;
}

void nQueens(int s,int board[n][n]);
{
	if(s >= n)
	{
		return;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(isValid(i,s,board))
			{
				board[i][s] = 1;
				if(nQueens(s+1,board))
				return true;
			}
			board[i][s]=0;
		}
	}
	printSolution(board);
}

int main()
{
	int n;
	cin>>n;
	int board[n][n];
	nQueens(board,0);
}
