#include<bits./stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int mini[n];
	int maxi[n];
	mini[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		if(mini[i-1] > arr[i])
		{
			mini[i]=arr[i];
		}
		else
		{
			mini[i]=mini[i-1];
		}
	}
	maxi[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(maxi[i+1] < arr[i])
		{
			maxi[i] = arr[i];
		}
		else
		{
			maxi[i] = maxi[i+1];
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=max(ans,maxi[i]-mini[i]);
	}
	cout<<ans;
}
