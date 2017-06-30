/*
	dp[i][j][0] = a[i][j] + min(dp[i-1][j][1] + turn[i][j] , dp[i][j-1][0])
	dp[i][j][1] = a[i][j] + min(dp[i-1][j][1] , dp[i][j-1][0] + turn[i][j])	
*/

/*
1 2 3 4
2 3
2 3 4 5
ans=193
*/

/*#include<bits/stdc++.h>
#define M 1000000007
using namespace std;


int main()
{    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a1,b1,c1;
		cin>>a1>>b1>>c1;
		long long a[a1+1],b[b1+1],c[c1+1];
		a[0] = 0; b[0] = 0; c[0] = 0;
		for(int i=1;i<=a1;i++)		cin>>a[i];
		for(int i=1;i<=b1;i++)		cin>>b[i];
		for(int i=1;i<=c1;i++)		cin>>c[i];
		sort(a,a+a1);		sort(b,b+b1);		sort(c,c+c1);
		long long ar[a1],cr[c1];
		ar[0] = a[0];
		ar[1] = a[1];
		cout<<ar[1]<<" ";
		for(int i=2;i<=a1;i++)	{	ar[i] =ar[i-1]+a[i];	cout<<ar[i]<<" ";}
		cr[0] = c[0];
		cr[1] = c[1];
		cout<<endl<<cr[1]<<" ";
		for(int i=2;i<=c1;i++)	{	cr[i] =cr[i-1]+c[i];	cout<<cr[i]<<" ";}
		int i=1,j=1,k=1;
		long long ans=0;
		cout<<"\n";
		while(i<a1+1 &&j<b1+1&&k<c1+1)
		{
			while(a[i] <= b[j])
				i++;
			i-=1;
			while(c[k] <= b[j])
				k++;
			k-=1;
			cout<<"i = "<<i<<"ar[i] "<<ar[i]<<"\n";
			cout<<"b[j] = "<<b[j]<<"\n";
			cout<<"k = "<<k<<"cr[k] "<<cr[k]<<"\n";
			ans+= ((k*ar[i]*b[j])%M +(ar[i]*cr[k])%M +(i*k*b[j]*b[j])%M + (i*b[j]*cr[k])%M )%M;
			j++;
		}
		cout<<ans<<"\n";
	}
}*/

#include<bits/stdc++.h>
#define M 1000000007
using namespace std;


int main()
{    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a1,b1,c1;
		cin>>a1>>b1>>c1;
		long long a[a1+1],b[b1],c[c1+1];
		a[0] = 0;  c[0] = 0;
		for(int i=1;i<=a1;i++)		cin>>a[i];
		for(int i=0;i<b1;i++)		cin>>b[i];
		for(int i=1;i<=c1;i++)		cin>>c[i];
		sort(a,a+a1+1);		sort(c,c+c1+1);
		long long ar[a1],cr[c1];
		ar[0] = a[0];
		ar[1] = a[1];
		for(int i=2;i<=a1;i++)		ar[i] =(ar[i-1]+a[i])%M;
		cr[0] = c[0];
		cr[1] = c[1];
		for(int i=2;i<=c1;i++)		cr[i] =(cr[i-1]+c[i])%M;
		int i=1,j=0,k=1;
		long long ans=0;
		while(j<b1)
		{
			if(a[0] > b[j] || c[k] > b[j])
			{
				j++;
				continue;
			}
			while(a[i] <= b[j])
				i++;
			i-=1;
			while(c[k] <= b[j])
				k++;
			k-=1;
			ans=  (ans + ((k*(ar[i]*b[j])%M)%M +(ar[i]*cr[k])%M +(i%(k*(b[j]*b[j])%M)%M)%M + (i*(b[j]*cr[k])%M)%M )%M)%M;
			j++;
		}
		cout<<ans<<"\n";
	}
}
