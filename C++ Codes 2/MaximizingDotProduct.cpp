#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL dp[1001][1001];

LL maxians(LL i, LL j, LL ar1[], LL n, LL ar2[], LL m)
{
	if(i>=n || j>=m || n-i < m-j)
		return 0;
		
	if(dp[i][j] == -1)
	{
		dp[i][j] = max(ar1[i]*ar2[j] + maxians(i+1,j+1,ar1,n,ar2,m), maxians(i+1,j,ar1,n,ar2,m));
	}
	return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    LL n,m;
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    LL ar1[n],ar2[m];
    for(int i=0;i<n;i++)
    	cin>>ar1[i];
    for(int j=0;j<m;j++)
    	cin>>ar2[j];
    
    cout<<maxians(0,0,ar1,n,ar2,m);
    
    return 0;
}

