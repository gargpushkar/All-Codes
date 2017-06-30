#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int MSIS[n];
	MSIS[0] = arr[0];
	for(int i=1;i<n;i++)
	{
		MSIS[i] = arr[i];
		for(int j=0;j<i;j++)
		{
			if(arr[i] > arr[j])
				MSIS[i] = max(MSIS[i] , MSIS[j] + arr[i]);
		}
	}
	cout<<*max_element(MSIS,MSIS+n);
}
