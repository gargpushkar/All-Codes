#include <bits/stdc++.h>
using namespace std;
int main() 
{	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        stack<char>st;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;s[i];i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                st.push(s[i]);
            else if(s[i]=='}' || s[i]==')' || s[i]==']')
            {
                if(st.empty())
                {
                    flag=1;
                    break;
                }
                char t = st.top();
                st.pop();
                if(s[i]=='}' && t!='{')
                {
                    flag=1;
                    break;
                }
                else if(s[i]==')' && t!='(')
                {
                	flag=1;
                	break;
				}
				else if(s[i]==']' && t != '[')
				{
					flag=1;
					break;
				}
            }
        }
        if(!st.empty())
        	flag=1;
        if(!flag)	cout<<"YES\n";
        else		cout<<"NO\n"; 
    }
    return 0;
}

