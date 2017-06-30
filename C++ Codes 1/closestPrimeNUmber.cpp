//practice.geeksforgeeks.org/problems/find-the-closest-prime-number-to-a-given-number/0
#include <bits/stdc++.h>
using namespace std;
int prime[1001011];
vector<long >primenum;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(prime,1,sizeof(prime));
    prime[1]=0;
    prime[2]=1;
    for(int i=2;i*i<=1000110;i++)
    {
    	if(prime[i])
    	{
    		for(int j=i*2;j<1000110;j+=i)
    		{
    			prime[j]=0;
			}
		}
	}
	primenum.push_back(2);
	for(int i=3;i<1000110;i+=2)
	{
		if(prime[i])
			primenum.push_back(i);
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(prime[n])
		{
			cout<<n<<"\n";
			continue;
		}
		int a1 = lower_bound(primenum.begin(),primenum.end(),n) - primenum.begin();
		if(abs(primenum[a1-1]- n)  <= abs(primenum[a1] - n))
			cout<<primenum[a1-1]<<"\n";
		else
			cout<<primenum[a1]<<"\n";
	}
    return 0;
}

