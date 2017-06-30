#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    int arr[n][m];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>arr[i][j];
    	
	int i=1,j=n-1;
	
	int ans = upper_bound(arr[0],arr[0]+m,0) -arr[0];
	cout<<ans;
    while(i<n && j>=0)
    {
    	if(arr[i][j])
    	{
    		while(arr[i][j])
    		{
    			ans++;
    			j--;
    			if(j<0)
	    			break;
			}
			j++;
			i++;
		}
		else
			i++;
    	
	}
8	cout<<ans;
    return 0;
}

