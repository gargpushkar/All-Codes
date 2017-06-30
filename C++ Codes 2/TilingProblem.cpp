/*Given a floor of size n x m and tiles of size 1 x m. 
The problem is to count the number of ways to tile the given floor using 1 x m tiles. 
A tile can either be placed horizontally or vertically.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<m;i++)
    {
    	dp[i]=1;
	}
	dp[m]=2;
	for(int i=m+1;i<=n;i++)
	{
		dp[i] = dp[i-1] + dp[i-m];
	}
	cout<<dp[n];
    return 0;
}

