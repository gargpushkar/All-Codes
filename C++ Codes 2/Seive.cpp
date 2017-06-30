#include<bits/stdc++.h>
using namespace std;


/*	TEMPLATE FOR SEIVE
int prime[1000000]={0};
int PN[100000];
int k;

void seive()
{
	PN[k++]=2;
	for(int i=3;i*i<=1000000;i+=2)
	{
		if(!prime[i])
		{
			PN[k++] = i;
			for(int j=i*i;j<1000000;j+=i+i)
				prime[j]=1;
		}
	}
	for(int i=1001;i<1000000;i+=2)
		if(!prime[i])
			PN[k++]=i;
}
*/
int main()
{
	int n;
	cin>>n;
	bool prime[n+1];
	for(int i=0;i<n;i++)
		prime[i]=true;
	prime[0]=false;
	prime[1]=false;
	prime[2]=true;
	int count=0;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==true)
		{	
			for(int p=i*2;p<n;p+=i)
			{
				prime[p]=false;
			}
		}
	}
	for(int i=2;i<n;i++)
	{
		if(prime[i]==1)
		{
			cout<<i<<endl;
			count++;
		}
	}
	cout<<count;
}
