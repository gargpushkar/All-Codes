#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,st;
    getline(cin,s);
    getline(cin,st);
	int n=s.length();
    int k = st.length();
    int j=0;
    for(int i=0;i<n;i++)
    {
    	if(s[i] == st[j])
    	{
    		j++;
		}
		if(j==k)
		{
			cout<<"TRUE";
			return 0;		
		}
	}
	cout<<"FALSE";
    return 0;
}

