#include<bits/stdc++.h>

using namespace std;
// In single loop finding 2-3 minimum elements in an array.
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int t1=99999999, t2=99999999, t3=99999999;
	// t3 < t2 < t1
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i] < t1)
		{
			if(arr[i]<t2)
			{
				if(arr[i]<t3)
				{
					t1=t2;
					t2=t3;
					t3=arr[i];
				}
				else
				{
					t1=t2;
					t2=arr[i];
				}
			}
			else
			{
				t1=arr[i];
			}
		}
	}
	cout<<t3<<" "<<t2<<" "<<t1;
}
