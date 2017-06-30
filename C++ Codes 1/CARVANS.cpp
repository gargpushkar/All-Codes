#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int ans=1;
    	int min;
    	cin>>min;
    	int a;
    	for(int i=1;i<n;i++)
    	{
    		cin>>a;
    		if(a <= min)
    		{
    			ans++;
    			min=a;
			}
		}
		cout<<ans<<"\n";
	}
    return 0;
}

