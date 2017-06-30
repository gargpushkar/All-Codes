#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int count=0;
    cin>>n;
    while(n--)
    {
    	string s;
    	cin>>s;
    	for(int i=0;i<s.length();i++)
    	{
    		if(!isupper(s[i]))
    		{
    			count++;
    			break;
			}
		}
	}
	cout<<count;
    return 0;
}

