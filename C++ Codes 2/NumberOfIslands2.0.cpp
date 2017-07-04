#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[1000][1000]={0};
int visited[1000][1000]={0};

int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};

bool isSafe(int i,int j)
{
	if(i>=0 && j>=0 && i<n && j<m && arr[i][j]==1 && visited[i][j]==0)
		return true;
	return false;
}

void dfs(int i, int j)
{
	visited[i][j]=1;
	for(int k=0;k<8;k++)
	{
		int a=i+dx[k];
		int b=j+dy[k];
		if(isSafe(a,b))
			dfs(a,b);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    
    cin>>n>>m;
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>arr[i][j];
    
    int count=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(arr[i][j]==1 && visited[i][j]==0)
    		{
    			dfs(i,j);
				count++;
			}
		}
	}
    cout<<count;
    return 0;
}

