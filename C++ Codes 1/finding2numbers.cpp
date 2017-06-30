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
	cout<<"SUM\n";
	int sum;
	cin>>sum;
	sort(arr,arr+n);
	int i=0,j=n-1;
	while(i<j)
	{
		if(arr[j]+arr[i]>sum)
		{
			j--;
		}
		else if(arr[j]+arr[i]<sum)
		{
			i++;
		}
		else
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
