#include <bits/stdc++.h>
using namespace std;

map<long long,long long>mp;

long long poop(long long n)
{
	if(n<=11)
		return n;
	if(mp[n])
	{
		return mp[n];
	}
	mp[n] = max(n,poop(n/2) + poop(n/3) + poop(n/4));
	return mp[n];
}

int main()
{
  /*  ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
	/*	freopen("inputf.in ","r",stdin);
		freopen("outputf.txt","w",stdout);*/
    long long n;
    while(cin>>n)
 	   cout<<poop(n)<<"\n";
    return 0;
}
