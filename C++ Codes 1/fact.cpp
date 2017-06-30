#include<bits/stdc++.h>

using namespace std;

long long pow(int n, int m)
{
	int i=1;
	long long ans=1;
	if(m%2==0)
		for(int i=1;i<=m;i++)
		{
			ans*=n;
			if(i==m/2)
			{
				ans*=ans;
				return ans;
			}
		}
	else
	{
		for(int i=1;i<=m;i++)
		{
			ans*=n;
			if(i==m/2)
			{
				ans=ans*ans*n;
				return ans;
			}
		}
	}
}
map<long long, long long>mp;
long long powr(int a, int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	else
	{
		if(n&1)
			return powr(a,n/2)*powr(a,n/2)*a;
		else
			return powr(a,n/2)*powr(a,n/2);
	}
}
// DP with memoization
long long p(int a, int n)
{
	if(n==1)
	{
		return a;
	}
	if(mp.find(n/2)==mp.end())
	{
		mp[n/2]= p(a,n/2);
	}
	if(n&1)
		return a*mp[n/2]*mp[n/2];
	else
		return mp[n/2]*mp[n/2];
}

long long pr(int a, int n)
{
	long long ans=1;
	while(n)
	{
		if(n&1)
			ans*=a;
		a*=a;
		n/=2;
	}
	return ans;
}

int main()
{
	int n,m;
	cin>>n>>m;
	cout<<pr(n,m);
}
