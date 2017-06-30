#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int maxi[n];
	maxi[0]=arr[0];
	maxi[1]=max(arr[1],arr[0]);
	for(int i=2;i<n;i++)
	{
		maxi[i]=max(maxi[i-2]+arr[i],maxi[i-1]);
	}
	cout<<maxi[n-1];
}
