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
    	string st;
    	cin>>st;
    	int n=st.length();
    	int even_count=0;
    	int odd_count=0;
    	for(int i=0;i<n;i++)
    	{
    		if(i&1)
    		{
				if(st[i]=='1')
	    			odd_count++;
			}
			else
				if(st[i]=='1')
    				even_count++;
		}
		abs(odd_count-even_count)%3 ? cout<<0<<"\n" : cout<<1<<"\n";
	}
    return 0;
}

