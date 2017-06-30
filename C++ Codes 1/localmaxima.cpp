#include<bits/stdc++.h>
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
	int i=0,j=n-1;
	while(i<=j)
	{
		int mid=(i+j)/2;
		if(arr[mid-1] > arr[mid])
			j = mid-1;
		else if(arr[mid+1] > arr[mid])
			i= mid+1;
		else
		{
			cout<<arr[mid];
			break;
		}
	}
}
