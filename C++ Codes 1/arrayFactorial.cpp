#include<bits/stdc++.h>

using namespace std;
int ptr;
int *fact(int x)
{
	int *arr=new int[1000];
	ptr=1;
	arr[0]=1;
	int carry=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<ptr;j++)
		{
			int x = arr[j]*i + carry;
			arr[j] = x%10;
			carry = x/10;
		}
		while(carry)
		{
			arr[ptr] = carry%10;
			ptr++;	
			carry/=10;
		}
		carry=0;
	}
	
	return arr;
}
int main()
{
	int n;
	cin>>n;
	int *ar=fact(n);
	for(int i=ptr-1;i>=0;i--)
	{
		cout<<ar[i];
	}
	return 0;
}
