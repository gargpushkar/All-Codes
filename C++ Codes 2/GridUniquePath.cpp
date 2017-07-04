#include <bits/stdc++.h>
using namespace std;

int arr[1000][1000]={-1};
//brute
int Min(int i, int j, int n, int m)
{
	if(i>n or j>m)
		return 0;
	if(i==n-1 or j==m-1)
	{
		return 1;
	}
	return (Min(i+1,j,n,m) + Min(i,j+1,n,m) );
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
 //   cout<<Min(0,0,n,m);
    //dp
    int count[n][m];
    for(int i=0;i<n;i++)
    {
    	count[i][0]=1;
	}
	for(int i=0;i<m;i++)
		count[0][i]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			count[i][j] = count[i-1][j]+count[i][j-1];
		}
	}
	cout<<count[n-1][m-1];
    return 0;
}

