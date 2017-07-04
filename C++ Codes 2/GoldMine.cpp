#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>arr[i][j];
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
	for(int i=0;i<m;i++)
    	dp[i][0] = arr[i][0];
    
	for(int j=1;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				dp[i][j] = arr[i][j] + max(dp[i][j-1],dp[i+1][j-1]);
			}
			else if(i==n-1)
			{
				dp[i][j] = arr[i][j] + max(dp[i-1][j-1] , dp[i][j-1]);
			}
			else
				dp[i][j] = arr[i][j] + max(dp[i-1][j-1] , max(dp[i][j-1],dp[i+1][j-1]));
		}
	}
	int maxi=0;
	for(int i=0;i<m;i++)
	{
		maxi = max(maxi,dp[i][n-1]);
	}
	cout<<maxi;
    return 0;
}

