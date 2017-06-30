#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<int>st;
		for(int i=1;i<=2*n;i+=2)
		{
			st.insert(i);
		}
		set<int>::iterator it;
		ofor(it = st.begin();it!=st.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}
