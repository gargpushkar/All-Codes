#include<bits/stdc++.h>

using namespace std;

map<int ,int>mp;

int fib(int a)
{
	if(mp.find(a)!=mp.end())
	{
		return mp[a];
	}
	mp[a]= fib(a-1)+fib(a-2);
}


int main()
{
	mp[0]=0;
	mp[1]=1;
	int a;
	cin>>a;
	cout<<fib(a);
}
