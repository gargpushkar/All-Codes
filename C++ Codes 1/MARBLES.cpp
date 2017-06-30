#include <bits/stdc++.h>
using namespace std;

long long C (long long n, long long r) 
{
	long long res = 1,i;
	if(r > n/2)
	    r = n-r;
	for(i = 0; i < r; i++) 
	{
	    res *=  n;
	    res /= i+1;
	    n--;
	}
	return res;
  }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	long long N,K,r,n;
    	cin>>N>>K;
    	r = N-K;
		n = K;
    	cout<<C(n+r-1,r)<<"\n";
	}
    return 0;
}

