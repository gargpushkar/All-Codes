#include<bits/stdc++.h>
using namespace std;
//sorted row wise and column wise
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	cout<<"Enter 2-D Array: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter Key...!!\n";
	int key;
	cin>>key;
	int i=n-1,j=0;
	while(j<n && i>=0)
	{
		if(arr[i][j] > key)
		{
			i--;
		}
		else if(arr[i][j] < key)
		{
			j++;
		}
		else
		{
			cout<<"Element Found\n";
			break;
		}
	}
}
