#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter nXn matrix: \n";
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	for(int i=1;i<n;i++)
	{
		arr[i][0]+=arr[i-1][0];
		arr[0][i]+=arr[0][i-1];
	}
	for(int i=1;i<n;i++)
		for(int j=1;j<n;j++)
			arr[i][j]= arr[i][j] + min(arr[i-1][j] , arr[i][j-1]);
			//arr[i][j]= arr[i][j] + max(arr[i-1][j] , arr[i][j-1]);
	cout<<arr[n-1][n-1]<<endl;
	int i=n-1,j=n-1;
	cout<<n-1<<" "<<n-1<<endl;
	cout<<"Path is : \n";
	while(i!=0 && j!=0)
	{
		if(arr[i-1][j] > arr[i][j-1])
		{
			cout<<i-1<<" "<<j<<endl;
			i--;
		}
		else
		{
			cout<<i<<" "<<j-1<<endl;
			j--;
		}
		if(j==0)
		{
			while(i--)
			{
				cout<<i<<" "<<j<<endl;
			}
		}
		if(i==0)
		{
			while(j--)
			{
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
