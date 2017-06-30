#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		arr[0]=INT_MIN;
		for(int i=1;i<=n;i++)
			cin>>arr[i];
		sort(arr,arr+n+1);
/*		for(int i=0;i<=n;i++)
			cout<<arr[i]<<endl;*/
		long long ans=0;
		int i;
		for(i=n;i>0;i--)
		{
//			cout<<"i="<<i<<endl;
			if(arr[i] < 0)
			{
				break;
			}
			ans+=arr[i];
		}
		int k = n-i;
/*		cout<<k<<endl;
		cout<<"i="<<i<<endl;
		cout<<"ans="<<ans<<endl;*/
		for(;i>0;i--)
		{
//			cout<<"i="<<i<<endl;
			if((ans+arr[i])*(k+1) < ans*k )
			{
				break;
			}
			ans+=arr[i];
			k++;
		}
		ans=ans*k;
//		cout<<ans<<"\n";
		for(;i>0;i--)
		{
			ans+=arr[i];
		}
		cout<<ans<<"\n";
	}
    return 0;
}

