//http://www.geeksforgeeks.org/element-1st-array-count-elements-less-equal-2nd-array/
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int val)
{
	int l=0;
	int h = n-1;
	while(l<=h)
	{
		int mid = l + (h-l)/2;
		if(arr[mid] <= val)
			l=mid+1;
		else
			h=mid-1;
	}
	return h;
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m;
    cout<<"Enter n and m : ";
    cin>>n>>m;
    int arr1[n],arr2[m];
    cout<<"Enter array 1 : ";
    for(int i=0;i<n;i++)
    {
    	cin>>arr1[i];
	}
	cout<<"Enter array 2 : ";
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	sort(arr2,arr2+m);
	for(int i=0;i<n;i++)
	{
		cout<<binarysearch(arr2,m,arr1[i])+1<<" ";
	}
    return 0;
}

