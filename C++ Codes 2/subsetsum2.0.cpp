#include<bits/stdc++.h>

using namespace std;

bool subsetsum(int i, int n, int sum , int s, int a[])
{
	if(i>n || sum > s)
		return false;
	if(sum==s)
		return true;
	return subsetsum(i+1,n,sum+a[i],s,a) || subsetsum(i+1,n,sum,s,a);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		subsetsum(0,n,0,k,arr) ? cout<<"YES" : cout<<"NO";
		cout<<"\n";
	}
}
