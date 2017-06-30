#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	long long ans=0;
	map<pair<long, long>, long long>mp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			pair<long , long>p=make_pair(i,j);
			if(mp.find(p)!=mp.end())
			{
				ans+= mp[p];
			}
			else
			{
				ans+=arr[i]&arr[j];
				mp[p] = arr[i]&arr[j];
			}
		}
	}
	cout<<ans;
    return 0;
}

