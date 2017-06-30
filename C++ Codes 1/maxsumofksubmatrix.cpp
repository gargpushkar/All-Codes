//DP Find max sum of kXk matrix given nXn matrix
#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter n:\n";
	int n;
	cin>>n;
	cout<<"Enter 2D array:\n";
	int arr[n][n];
	int cumulativematrix[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			cumulativematrix[i][j]=0;
		}
	}
	cout<<"Enter k: \n";
	int k;
	cin>>k;
	int sum1=0;
	cumulativematrix[0][0] = arr[0][0];
	for(int i=1;i<n;i++)
	{
		cumulativematrix[i][0] = cumulativematrix[i-1][0] + arr[i][0]; 
		cumulativematrix[0][i] = cumulativematrix[0][i-1] + arr[0][i]; 
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			cumulativematrix[i][j] =arr[i][j] +cumulativematrix[i-1][j] + cumulativematrix[i][j-1] -cumulativematrix[i-1][j-1];
		}
	}
	int ans=0;
	for(int i=k-1;i<n;i++)
	{
		for(int j=k-1;j<n;j++)
		{
			sum1=cumulativematrix[i][j] - cumulativematrix[i-k][j] - cumulativematrix[i][j-k] + cumulativematrix[i-k][j-k];
			ans=max(ans,sum1);
		}
	}
	cout<<ans;
/*	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<cumulativematrix[i][j]<<" ";
		}
		cout<<endl;
	}*/
}
