#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int memo[1000][1000];
//		To Check if a subset is present or not
bool subsetsum(int i,int n, int sum, int s)
{
	if(i>n || s > sum)
		return false;
	if(sum == s)
		return true;
	if(memo[i][s]!=-1)
	{
		return memo[i][s];
	}
	memo[i][s]= subsetsum(i+1,n,sum,s+arr[i]) || subsetsum(i+1,n,sum,s);
	return memo[i][s];
}
/*
int subsetsum(int i,int n, int sum, int s)		// To check the number of subsets present 
{
	if(i>n || s > sum)
		return 0;
	if(sum == s)
		return 1;
	if(memo[i][s]!=-1)
	{
		return memo[i][s];
	}
	memo[i][s]= subsetsum(i+1,n,sum,s+arr[i]) + subsetsum(i+1,n,sum,s);
	return memo[i][s];
}*/
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int dptable[1000][1000];
    memset(dptable,0,sizeof(dptable));
    memset(memo,-1,sizeof(memo));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int sum;
	cin>>sum;
	cout<<subsetsum(0,n,sum,0);
    return 0;
}

