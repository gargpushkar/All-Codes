#include <bits/stdc++.h>
using namespace std;

bool usedInRow(int grid[9][9],int row, int num)
{
	for(int i=0;i<9;i++)
		if(grid[row][i] == num)
			return true;
	return false;
}

bool usedInColumn(int grid[9][9],int col, int num)
{
	for(int i=0;i<9;i++)
		if(grid[i][col] == num)
			return true;
	return false;
}

bool usedInBox(int grid[9][9],int boxStartRow, int boxStartColumn, int num)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(grid[i+boxStartRow][j+boxStartColumn] == num)
				return true;
	
	return false;
}

bool isSafe(int grid[9][9],int row,int col,int num)
{
	return !usedInRow(grid,row,num)&&!usedInColumn(grid,col,num)&&!usedInBox(grid,row-row%3,col-col%3,num);
}

bool findUnassignedLocation(int grid[9][9], int &row, int &col)
{
	for(row=0;row<9;row++)
		for(col=0;col<9;col++)
			if(grid[row][col] == 0)
				return true;
	return false;
}

int solveSuduku(int grid[][9])
{
	int row,col;
	if(!findUnassignedLocation(grid,row,col))
	{
		return true;
	}
	for(int num=1;num<=9;num++)
	{
		if(isSafe(grid,row,col,num))
		{
			grid[row][col]=num;
			if(solveSuduku(grid))
				return true;
			grid[row][col]=0;
		}
	}
	return false;
}

void printGrid(int grid[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<grid[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
	int grid[9][9]= {
						{3, 0, 6, 5, 0, 8, 4, 0, 0},
				        {5, 2, 0, 0, 0, 0, 0, 0, 0},
						{0, 8, 7, 0, 0, 0, 0, 3, 1},
						{0, 0, 3, 0, 1, 0, 0, 8, 0},
						{9, 0, 0, 8, 6, 3, 0, 0, 5},
						{0, 5, 0, 0, 9, 0, 6, 0, 0},
						{1, 3, 0, 0, 0, 0, 2, 5, 0},
						{0, 0, 0, 0, 0, 0, 0, 7, 4},
						{0, 0, 5, 2, 0, 6, 3, 0, 0}
					};
					
	int flag= solveSuduku(grid);
	if(flag)
	{
		cout<<"Answer Exists : \n";
		printGrid(grid);
	}
	else
		cout<<"Answer doesnot Exists";
    return 0;
}

