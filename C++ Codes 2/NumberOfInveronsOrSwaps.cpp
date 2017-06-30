#include<bits/stdc++.h>
using namespace std;
//incompletee
int ans;
int merge(x,y)
{
	int i=0;int j=0,inv=0;
	while(i<n && j<m)
	{
		if(a[i] > a[j])
		{
			inv+=n-j;
			j++;
		}
		else
			i++;
	}
	return inv;
}
int mergesort(a,n,l,h)
{
	if(l>=h)
		return 0;
	ans+=mergesort(a,n,l,mid);
	ans+=mergesort(a,n,mid+1,h);
	ans+=merge(x,y);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int count=mergesort(arr,n,0,n-1);
}
