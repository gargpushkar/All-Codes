#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int ways(int i, int j, int n, int sum, int s)
{
	if(i>=n || j>=n)	return 0;
	
	if(i==n-1 && j==n-1 && sum==s)	return 1;
	
	return ways(i+1,j,n,sum+arr[i][j],s)+ways(i,j+1,n,sum+arr[i][j],s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	cout<<"Enter sum : ";
	int s;
	cin>>s;
	cout<<ways(0,0,n,0,s);
    return 0;
}

