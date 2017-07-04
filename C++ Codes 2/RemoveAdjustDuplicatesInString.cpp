#include <bits/stdc++.h>
using namespace std;

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);    cout.tie(NULL);
    string s;
    cin>>s;
    stack<char>st;
    st.push('2');
    char prev = st.top();
	for(int i=0;s[i];i++)
    {
    	char curr=s[i];
    	if(!s.empty() && curr == st.top())
    		st.pop();
		else if(prev!=curr)
			st.push(curr);
		prev=curr;
	}
	string ans="";
	while(st.size()!=1)
	{
		ans+=st.top();
		st.pop();
	}
	reverse(ans.begin(),ans.end());
    cout<<ans;
	return 0;
}

