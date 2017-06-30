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
    	long long a,b,c;
    	cin>>a>>b>>c;
    	if(c&1)
    	{
    		a*=2;
    		long e = max(a,b);
			long d = min(a,b);
			cout<<e/d<<"\n";;
		}
		else
		{
			long e = max(a,b);
			long d = min(a,b);
			cout<<e/d<<"\n";
		}
	}
    return 0;
}

