#include<bits/stdc++.h>
#define md 1000000007
int x,ans;
int power(int a, int n )
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	x=power(a,n/2);
	ans=(x%md * x%md)%md;
	if(n&1)	ans=(ans*a)%md;
	return ans;
}
using namespace std;
int main()
{
	/*
		Part 1:
			Precomputation
			store all fact mod m in array.
			store all inverse module of fact[i] using fermet's little theorem in another array
	*/
	/*
		Part 2:
			define power function 
	*/
	/*
		Part 3:
			Final Computation
			ans=1;
			ans=(ans*fact[n]) mod m
			ans=(ans*inv[r]) mod m 
			ans=(ans*inv[n-r]) mod m
	*/
	int n,r;
	int factorial[n+1];
	factorial[0]=1;
	int inv[n+1];
	cin>>n>>r;
	for(int i=1;i<=n;i++)
	{
		factorial[i] = (i*factorial[i-1])%md;
		cout<<factorial[i]<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		inv[i] = power(factorial[i],md-2);  // fermet theorem
		cout<<inv[i]<<"\n";
	}
}
