#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int c1=0,c2=0;
    vector<set <char> >vec1,vec2;
    for(int i=0;i<n;i++)
    {
    	string s;
    	cin>>s;
    	set<char>st;
    	for(int j=0;j<s.length();j++)
    	{
    		st.insert(s[j]);
		}
		if(st.size() == 26)
		{
			c1++;
		}
		else
	    	vec1.push_back(st);
	    	
	    cout<<vec1[i];
	}
	for(int i=0;i<m;i++)
	{
		string s;
		cin>>s;
		set<char>st;
		for(int j=0;j<s.length();j++)
		{
			st.insert(s[j]);
		}
		if(st.size()==26)
		{
			c2++;
		}
		else
			vec2.push_back(st);
	}
	cout<<ans;
    return 0;
}

