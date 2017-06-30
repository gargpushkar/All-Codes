#include <bits/stdc++.h>
using namespace std;
//wrong
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
	int i=0, j=0, ans=0, flag;
	while(i<n)
	{
		ans++;
		flag=0;
		int maxloc = i+k;
		while(i<n && i<maxloc)
		{
			if(arr[i]==1)
			{
				j=i;
				flag=1;
			}
			i++;
		}
		if(flag==0)
			break;
		flag=0;
		maxloc = j+k;
		i=j;
		while(i<n && i<maxloc)
		{
			if(arr[i]==1)
			{
				j=i;
				flag=1;
			}
			i++;
		}
	}
	if(flag==0)
		ans=-1;
	cout<<ans;
    return 0;
}

