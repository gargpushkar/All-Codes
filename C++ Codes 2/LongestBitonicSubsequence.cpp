#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int lis[n];		//longest increasing subsequence
    int lds[n];		//longest decreasing subsequence
    for(int i=0;i<n;i++)
	{
  		cin>>arr[i];
  		lis[i]=1;
  		lds[i]=1;
	}
    for(int i=1;i<n;i++)
    {
    	for(int j=0;j<i;j++)
    	{
    		if(arr[j] < arr[i])
    		{
    			lis[i] = max(lis[i],lis[j]+1);
			}
		}
	}
	
	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
			if(arr[j] < arr[i])
			{
				lds[i] = max(lds[i],lds[j]+1);
			}
		}
	}
	int ans=lds[0]+lis[0] -1;
	
	for(int i=1;i<n;i++)
	{
		ans=max(ans,lds[i]+lis[i] - 1);
	}
	cout<<ans;
    return 0;
}

