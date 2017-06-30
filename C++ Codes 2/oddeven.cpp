#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
	int c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		if(c1>1 || c2>1)
		{
			cout<<"bad";
			return 0;
		}
		if(arr[i]%2==0)
		{
			c1+=1;
			c2=0;
		}
		else
		{
			c1=0;
			c2+=1;
		}
	}
	if(c1>1 || c2>1)
	{
		cout<<"bad";
		return 0;
	}
	cout<<"good";
    return 0;
}

