#include<bits/stdc++.h>
using namespace std;
//WRONG
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k; cin>>k;
	int i=0,j=0;
	int maxi=0;
	int t=k;
	int count=0;
	while(j<n)
	{
		if(arr[j]==1)
		{
			count++;
		}
		else if(arr[j]==0)
		{
			if(t>0)
			{
				t--;
				count++;
			}
			else
			{
				t++;
				if(arr[i]==0)
				{
					i++;	
				}
				else
				{
					count++;
				}
				maxi=max(count,maxi);
			}
		}
		j++;
	}
	cout<<maxi;
}
