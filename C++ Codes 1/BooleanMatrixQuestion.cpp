#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int r,c;
    	cin>>r>>c;
    	int matrix[r][c];
    	for(int i=0;i<r;i++)
    		for(int j=0;j<c;j++)
    			cin>>matrix[i][j];
    	
    	int row[r];
    	int col[c];
    	memset(row,0,sizeof(row));
    	memset(col,0,sizeof(col));
    	
    	for(int i=0;i<r;i++)
    		for(int j=0;j<c;j++)
				if(matrix[i][j] == 1)
				{
					row[i]=1;
					col[j]=1;
				}
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				if(row[i] || col[j])
					matrix[i][j] = 1;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cout<<matrix[i][j]<<" ";
		cout<<"\n";
	}
    return 0;
}

