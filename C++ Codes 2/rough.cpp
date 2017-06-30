#include <bits/stdc++.h>
using namespace std;
int prime[1000000]={0};	//	used to calculate prime numbers
int PN[100000];		//stores prime numbers
int k;	// number of prime numbers
void sieve()
{
	PN[k++]=2;
	for(int i=3;i*i<1000000;i+=2)
	{
		if(!prime[i])
		{
			PN[k++]=i;
			for(int j=i*i;j<1000000;j+=i+i)
				prime[j]=1;
		}
	}
	for(int i=1001;i<1000000;i+=2)
		if(!prime[i])
			PN[k++]=i;
}
int main()
{
	sieve();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int t;
    cin>>t;
	while(t--)
	{
		map<int,int>m;
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				while(arr[i] >1 && arr[i]%PN[j]==0)
				{
					arr[i]/=PN[j];
					if(m.find(PN[j])!=m.end())
						m[PN[j]]++;
					else
						m.insert(make_pair(PN[j],1));
				}
			}
			if(arr[i]!=1)
			{
				if(m.find(arr[i])!=m.end())
					m[arr[i]]++;
				else
					m.insert(make_pair(arr[i],1));
			}
		}
		map<int, int> :: iterator it;
		long long ans=1;
		for(it=m.begin();it!=m.end();it++)
			ans = ans*((*it).second + 1LL);
		cout<<ans<<"\n";
	}
	return 0;
}
