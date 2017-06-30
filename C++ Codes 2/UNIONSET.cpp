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
    	int n,k;
    	cin>>n>>k;
    	vector<set<int> >vec(n);
    	for(int i=0;i<n;i++)
    	{
    		int a;
    		cin>>a;
			int num;
    		for(int j=0;j<a;j++)
    		{
    			cin>>num;
    			vec[i].insert(num);
			}
		}
		
		int ans=0;
		for(int i=0;i<n;i++)
		{
			set<int >samp;
			samp= vec[i];
			if(samp.size() == k)
			{
				ans+= n-i-1;
				continue;
			}
			set<int >st=samp;
			for(int j=i+1;j<n;j++)
			{
				set_union(samp.begin(),samp.end(),vec[j].begin(), vec[j].end(),st.begin());
				st.insert(vec[j].begin(), vec[j].end());
				if(st.size() == k)
					ans++;
				st=samp;
			}
		}
		cout<<ans<<"\n";
	}
    return 0;
}

