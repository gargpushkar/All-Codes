#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("inputf.in ","r",stdin);
	freopen("outputf.txt","w",stdout);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[abs(arr[i])]<0)
		{
			cout<<"Duplicate";
		}
		else
		{
			arr[abs(arr[i])]=-arr[abs(arr[i])];
		}
	}
}
