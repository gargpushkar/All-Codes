#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long arr[n];
	long long p=1;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long mpp=1;
	long long mnp=1''
	for(int i=0;i<n;i++)
	{
		if(arr[i] > 0)
		{
			mpp*=arr[i];
			ans= max(ans,mpp);
		}
		else
		{
			mnp=mpp*arr[i];
		}
	}
}
