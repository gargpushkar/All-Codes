#include <bits/stdc++.h>
using namespace std;

//brute_force can cause overflow
long long nCr(long long n, long long r)
{
	if(n==r || r==0)
		return 1;
	return nCr(n-1,r-1) + nCr(n-1,r);
}

long long min(int a, long long b)
{
	return a>b?b:a;
}
//with DP and memoization can cause overflow
long long nCrDPTable(long long n, long long r)
{
	long long C[n+1][r+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=	min(i,r);j++)
		{
			if(j==0 || i==j)
				C[i][j] = 1;
			else
				C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	return C[n][r];
}

long long nCrModp(long long n, long long r,long long p)
{
	long long C[n+1][r+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=	min(i,r);j++)
		{
			if(j==0 || i==j)
				C[i][j] = 1;
			else
				C[i][j] = (C[i-1][j-1] + C[i-1][j])%p;
		}
	}
	return C[n][r];
}

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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);    cout.tie(NULL);
    long long n,r;
    cin>>n>>r;
//	clock_t start = clock();
    cout<<nCrDPTable(n,r)<<"\n";
//    cout<<C(n,r);
/*    clock_t end = clock();
    double time = (end-start)/(double)CLOCKS_PER_SEC;
    cout<<"time : "<<time<<"\n";
    start = clock();
    cout<<nCrModp(n,r,1000000000)<<"\n";
    end = clock();
    time = (end-start)/(double)CLOCKS_PER_SEC;
    cout<<"time : "<<time<<"\n";
    start = clock();
    cout<<nCr(n,r)<<"\n";
    end = clock();
    time = (end-start)/(double)CLOCKS_PER_SEC;
    cout<<"time : "<<time<<"\n";*/
    
    
    return 0;
}

