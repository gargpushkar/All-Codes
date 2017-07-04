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
    	string a,b;
    	cin>>a>>b;
    	int flag=0;
		if(a.length() != b.length())
    	{
    		cout<<"-1\n";
    	}
    	else
    	{
	    	int a1[26],b1[26];
			memset(a1,0,sizeof(a1));
			memset(b1,0,sizeof(b1));
	    	for(int i=0;i<a.length();i++)
	    		a1[a[i] - 'a']++;
			for(int i=0;i<b.length();i++)
	    		b1[b[i] - 'a']++;
	    	for(int i=0;i<26;i++)
				if(a1[i] != b1[i])
				{
					flag=1;
					break;
				}
			if(flag)
				cout<<"-1\n";
			else
			{
				int i=a.length();
				int j=i;
				int ans=0;
				while(i>=0)
				{
					if(b[j] == a[i])
					{
						ans++;
						j--;
					}
					i--;
				}
				cout<<a.length()-ans+1<<"\n";
			}
		}
	}
    return 0;
}

