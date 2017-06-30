#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a;
	while(n-->0)
	{
		int num;
		cin>>num;
		a=a xor num;
	}
	cout<<a;
}
