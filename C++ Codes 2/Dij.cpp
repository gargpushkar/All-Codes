#include <bits/stdc++.h>
using namespace std;

int visited[100000];
long long dist[100000];

void dij(int s,int n,vector<pair<int,int> > adj[])
{
	priority_queue<pair<int,int> , vector<pair<int, int> >, greater<pair<int, int> > >pq;
	pq.push(make_pair(0,s));
	dist[s]=0;
	while(!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		if(visited[u])
			continue;
		visited[u]=1;
		for(int i=0;i<adj[u].size();i++)
		{
			int v = adj[u][i].first;
			int w = adj[u][i].second;
			if(dist[v] > dist[u] + w)
			{
				dist[v] = dist[u] + w;
				pq.push(make_pair(dist[v],v));
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		if(i==s)
			continue;
		if(dist[i]!=99999999)
			cout<<dist[i]<<" ";
		else cout<<"-1 ";
	}
	cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	memset(visited,0,sizeof(visited));
    	int n,m;
    	cin>>n>>m;
		vector<pair<int,int> >adj[n+1];
		for(int i=0;i<100000;i++)
		{
			dist[i] = 99999999;
    	}
		for(int i=0;i<m;i++)
    	{
    		int a,b,c;
    		cin>>a>>b>>c;
			adj[a].push_back(make_pair(b,c));
    		adj[b].push_back(make_pair(a,c));	
		}
		int s;
		cin>>s;
		dij(s,n,adj);
	}
    return 0;
}

