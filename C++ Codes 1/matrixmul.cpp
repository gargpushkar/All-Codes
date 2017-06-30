#include <bits/stdc++.h>
using namespace std;
int n;
int A[1000][1000] , B[1000][1000] , C[1000][1000] ;
    
void mul(int a[1000][1000], int b[1000][1000], int c[1000][1000],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int ans=0;
			for(int k=0;k<n;k++)
				ans+=a[i][k]*b[k][j];
			c[i][j]=ans;
		}
	}
}

void powr(int a[1000][1000], int n, int p)
{
	int I[1000][1000];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		if(i==j)  I[i][j] =1;
		else I[i][j] = 0;
	
	while(p)
	{
		if(p&1)
			mul(I,a,I,n);
		mul(I,I,I,n);
		p/=2;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<I[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin>>A[i][j];
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin>>B[i][j];
    
    mul(A,B,C,n);
	for(int i=0;i<n;i++)
    {
		for(int j=0;j<n;j++)
    		cout<<C[i][j]<<" ";
    	cout<<"\n";
    }
    powr(A,n,4);
	return 0;
}

