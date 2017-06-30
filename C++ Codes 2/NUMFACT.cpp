#include <bits/stdc++.h>
using namespace std;
int prime[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
	int n;
	int arr[1000];
	cin>>n;
	int t=n;
	memset(arr,0,sizeof(arr));
	memset(prime,1,sizeof(prime));
	for(int i=2;i*i<=sqrt(1000000);i++)
	{
		for(int j=2*i;j<=1000000;j+=i)
		{
			if(prime[j])
				prime[j]=0;
		}
	}
	vector<int>vec;
	for(int i=2;i<1000000;i++)
	{
		if(prime[i])
			vec.push_back(i);
	}
	if(binary_search(vec.begin(),vec.end(),t))
	{
		arr[t]+=1;
	}
	else
	for(int i=0;i<=sqrt(t);i++)
	{
		int num=0;
		while(n>0 && n%vec[i]==0)
		{
			num++;
			n/=vec[i];
		}
		arr[vec[i]]+=num;
	}
	int temp=1;
	int ans=1;
	for(int i=2;i<=t;i++)
	{
		if(arr[i]>=1)
		{
			temp=temp*pow(i,arr[i]);
			ans=ans*(arr[i]+1);
		}
		cout<<"i "<<i<<" val "<<arr[i]<<"\n";
		if(temp==t)
			break;
	}
	cout<<"ans = "<<ans;
    return 0;
}

