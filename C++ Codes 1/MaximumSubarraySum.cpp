#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int f=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
			f=1;
	}
	if(f)
		return 0;
	int ans=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
//		cout<<sum<<" ";
		if(sum <= 0)
		{
			sum=0;
		}
		ans=max(ans,sum);
	}
	cout<<ans;
}
