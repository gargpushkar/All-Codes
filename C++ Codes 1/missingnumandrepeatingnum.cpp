#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int x=1 xor arr[0];
	int val1=0,val2=0;
	for(int i=1;i<n;i++)
	{
		x= x xor (i+1) xor arr[i];
	}
	int t=(x& (-1*x));	// caculating 1st occurance of 1 in a number(binary format) by taking 2's compliment
	for(int i=0;i<n;i++)
	{
		if((i+1)&t)
			val1^=(i+1);
		else
			val2^=(i+1);
		if(arr[i] & t)
			val1^=arr[i];
		else
			val2^=arr[i];
	}
	
	cout<<val1<<" "<<val2;
	//now traverse array to find duplicate element
}
