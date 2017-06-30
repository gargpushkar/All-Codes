#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	int x,y,z;
		for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		if(i&1 && !arr[i]&1)
    			x++;
    		else if(!i&1 && arr[i]&1 && arr[i]==1)
    			y++;
    		else if(!i&1 && arr[i]&1)
    			x++;
    		else
    			z++;
		}
		cout<<x<<" "<<y<<" "<<z
;		
	}
    return 0;
}

