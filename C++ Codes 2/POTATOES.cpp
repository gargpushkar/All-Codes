#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int prime[10000];
    memset(prime,1,sizeof(prime));
    for(int i=2;i*i<=10000;i++)
    {
    	if(prime[i])
    	{
    		for(int j=i*2;j<10000;j+=i)
    		{
    			prime[j]=0;
			}
		}
	}
	vector <int>p;
	for(int i=2;i<10000;i++)
		if(prime[i])
			p.push_back(i);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<p[(upper_bound(p.begin(),p.end(),a+b) - p.begin())] - (a+b)<<"\n";
	}

    return 0;
}

