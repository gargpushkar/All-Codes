#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[1000][1000];

int min(int x, int y, int z)
{
   return min(min(x, y), z);
}

int DPSol(string s1,string s2,int n,int m)
{
	if(n==0)
		return m;
	if(m==0)
		return n;
	if(s1[n-1] == s2[m-1])
	{
		if(dp[n-1][m-1]!=0)
			return dp[n-1][m-1];
		dp[n-1][m-1] = DPSol(s1,s2,n-1,m-1);
		return dp[n-1][m-1];
	}
	else
	{
		if(dp[n-1][m-1] != 0)
			return dp[n-1][m-1];
		else
			dp[n-1][m-1] = 1+ min(DPSol(s1,s2,n-1,m-1), DPSol(s1,s2,n-1,m),DPSol(s1,s2,n,m-1));
	}
	return dp[n-1][m-1];
}

//brute force
int EditDistance(string s1, string s2, int n, int m)
{
	if(n==0)
		return m;
	if(m==0)
		return n;
	if(s1[n-1] == s2[m-1])
		return EditDistance(s1,s2,n-1,m-1);
	return 1 + min(EditDistance(s1,s2,n-1,m-1),EditDistance(s1,s2,n-1,m),EditDistance(s1,s2,n,m-1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
    
//    cout<<EditDistance(s1,s2,n,m)<<"\n";
    cout<<DPSol(s1,s2,n,m);
    return 0;
}

