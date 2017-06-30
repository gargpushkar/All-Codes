#include<bits/stdc++.h>

using namespace std;

int main()
{
	string ar;
	cin>>ar;
	int n = ar.length();
	int arr[26];
	int cum[26];
	for(int i=0;i<n;i++)
	{
		arr[ar[i] - 'a']=1;
		cum[i]=0;
	}
	int flag=0;
	for(int i=0;i<26;i++)
	{
		if(flag)
		{
			cum[i]+=arr[i];
		}
		else
		{
			if(arr[i])
			{
				cum[i]=0;
				flag=1;	
			}
		}
		cout<<arr[i]<<endl;
	}
}
