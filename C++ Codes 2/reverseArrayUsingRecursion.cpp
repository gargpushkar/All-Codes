#include<bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int b, int e)
{
	if(b>=e )
		return;
	int t=arr[b];
	arr[b] = arr[e];
	arr[e] = t;
	reverseArray(arr,b+1,e-1);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	reverseArray(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
