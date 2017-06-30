#include <bits/stdc++.h>
using namespace std;

int to;

void dfs(int s,int visited[], vector<long long>list[])
{
	visited[s]=1;
	to++;
	vector<long long > t = list[s];
	for(int i=0;i<t.size();i++)
	{
		if(!visited[t[i]])
		{
			dfs(t[i],visited,list);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);

    int q;
    cin>>q;
    while(q--)
    {
    	int n,m,cl,cr;
    	cin>>n>>m>>cl>>cr;
    	vector<long long>list[n+1];
    	for(int i=1;i<=m;i++)
    	{
    		int a,b;
    		cin>>a>>b;
    		list[a].push_back(b);
    		list[b].push_back(a);
		}
		int visited[n+1];
		memset(visited,0,sizeof(visited));
		long long ans=0;
		for(int i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				to=0;
				dfs(i,visited,list);
				if( cl > cr)
				{
					ans+=cl + (to-1)*cr;
				}
				else
					ans+=cl+ (to-1)*cl;
			}
		}
		cout<<ans<<"\n";
	}
    return 0;
}

