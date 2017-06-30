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
	maxi[0]=1;
	for(int i=1;i<n;i++)
	{
		maxi[i] =1;
		for(int j=0;j<i;j++)
		{
			if(arr[j] < arr[i])
			{
				maxi[i] = max(maxi[i],maxi[j]+1);
			}
		}
	}
	cout<<*max_element(maxi,maxi+n);
}
