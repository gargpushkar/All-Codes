#include<bits/stdc++.h>
using namespace std;

long long memo[10000][10000];
long long fact(long long n,long long r)
{
	if(r==0 || n<=r)
		return 1;
	if(memo[n][r])
	{
		return memo[n][r];
	}
	memo[n][r] = (fact(n-1,r-1)%100007 + fact(n-1,r)%100007)%100007;
	return memo[n][r];
}
int main()
{
	long long n,r;
	cin>>n>>r;
	cout<<fact(n,r);
}
