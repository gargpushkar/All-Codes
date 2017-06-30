#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		long long temp=a+1;
		long long ans1 = temp*(temp+1)/2;
		long long ans2 = b*(2*temp + (b-1))/2;
		cout<<ans1+ans2<<endl;
	}
}
