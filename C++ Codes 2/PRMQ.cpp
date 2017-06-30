#include<bits/stdc++.h>

using namespace std;
int isprime[10000000];

int f(int l, int r, int x, int y, int a[])
{
	int ans=0;
	for(int i=x;i<=y;i++)
	{
		if(isprime[i])
		{
			for(int j=l;j<=r;j++)
			{
				int num = a[j];
				if(num%i==0)
				{
					exp=num/i;
				}
				int exp=0;
				while(num%i==0)
				{
					exp+=1;
					num/=i;
				}
				ans+=exp;
			}
		}
	}
	return ans;
}

int main()
{
	memset(isprime,1,sizeof(isprime));
	for(int i=2;i*i<=10000000;i++)
	{
		if(isprime[i])
		{
			for(int j=i*2;j<10000000;j+=i)
				isprime[j]=0;
		}
	}
	
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int l,r,x,y;
		cin>>l>>r>>x>>y;
		cout<<f(l,r,x,y,arr)<<"\n";
	}
	return 0;
}
