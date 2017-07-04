#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[100000];

ll DPSol(int n)
{
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	
	dp[n] = DPSol(n-1) + DPSol(n-2) + DPSol(n-3);
	return dp[n];
}

//brute force
int numberOfWaysToCoverDistance(int n)
{
	if(n < 0)
		return 0;
	if(n==0)
		return 1;
	return numberOfWaysToCoverDistance(n-1) + numberOfWaysToCoverDistance(n-2) + numberOfWaysToCoverDistance(n-3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n;
    cin>>n;
 //   cout<<numberOfWaysToCoverDistance(n)<<"\n";
    cout<<DPSol(n);
    return 0;
}

