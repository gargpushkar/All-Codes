#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	multiset<int>st;
	multiset<int> :: iterator itr;
	st.insert(arr[0]);
	int x; int iv=0;
	for(int i=1;i<n;i++)
	{
		itr=upper_bound(st.begin(),st.end(),arr[i]);
		iv += distance(itr,st.end());
		st.insert(arr[i]);
	}
	cout<<iv;
	return 0;
}
