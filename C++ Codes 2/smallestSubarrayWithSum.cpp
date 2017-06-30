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
	int x;
	cin>>x;
	int i=0,j=0;
	int sum=0;
	while(j<n)
	{
		if(sum==x)
		{
			cout<<i<<" "<<(j-1)<<endl;
			sum-=arr[i];
			i++;
		}
		else if(sum > x)
		{
			sum-=arr[i];
			i++;
		}
		else
		{
			sum+=arr[j];
			j++;
		}
	}
}
