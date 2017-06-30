#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	int t;
	cin>>t;
	int i=1;
	while(i<=t)
	{
		cout<<"Case #"<<i<<": ";
		i++;
		int n;
		cin>>n;
		string a=""; int b=0;
		getchar();
		while(n--)
		{
			string st;
			getline(cin,st);
			set<char>s(st.begin(),st.end());
			int y=s.size();
			if(s.find(' ')!=s.end())
				y--;
			if(b < y)
			{
				a=st;
				b=y;
			}
			else if(b==y)
			{
				if(a.compare(st) > 0)
					a=st;
			}
		}
		cout<<a<<endl;
	}
}
