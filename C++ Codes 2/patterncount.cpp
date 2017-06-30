#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	string st;
    	cin>>st;
    	int count=0;
    	int flag=0;
    	int n=st.length();
    	int one=0;
    	for(int i=0;i<n;i++)
    	{
    		if(st[i]!='0' && st[i]!='1')
			{
				one=0;
				flag=0;
			}
			else if(st[i] == '1' && one==0)
			{
				flag=1;
			}
			else if(st[i] == '1' && one==1)
			{
				count++;
				one=0;
			}
			else if(st[i]=='0' && flag==1) 
			{
				one=1;
			}
		}
		cout<<count<<"\n";
	}
    return 0;
}
//PALIN
