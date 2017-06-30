//https://www.codechef.com/problems/GCD2

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
    	int a;
    	string b;
    	cin>>a;
    	cin>>b;
    	if(!a)
    	{
    		cout<<b<<"\n";
    		continue;
		}
		int ans=0;
    	for(int i=0;b[i];i++)
    	{
    		ans = (ans*10 + (b[i] - '0'))%a;
		}
		cout<<__gcd(a,ans)<<endl;
	}
    return 0;
}

