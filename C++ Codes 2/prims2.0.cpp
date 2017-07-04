// for 1 based indexing

#include <bits/stdc++.h>
using namespace std;

int prims(vector<pair<int,int> >adj[], int n,int s )
{
	priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >pq;
	pq.push({0,s});
	
	int key[n+1];
	for(int i=0;i<=n;i++)
	{
		key[i] = 9999999;
	}
	int visited[n+1];
	memset(visited,0,sizeof(visited));
	int edg=0;
	int parent[n+1];
	memset(parent,-1,sizeof(parent));
	while(!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		visited[u]=1;
		edg++;
		for(int i=0;i<adj[u].size();i++)
		{
			int v = adj[u][i].first;
			int weight = adj[u][i].second;
			
			if(!visited[v] && key[v] > weight)
			{
				key[v]=weight;
				pq.push({key[v],v});
				parent[v]=u;
			}
		}
	}
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		if(parent[i]!=-1)
			ans+=key[i];
	}
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int v,e;
    cin>>v>>e;
    vector<pair<int,int> >adj[v+1];
    for(int i=0;i<e;i++)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	a-=1;
    	b-=1;
    	adj[a].push_back({b,c});
    	adj[b].push_back({a,c});
	}
	int s;
	cin>>s;
	s-=1;
	cout<<prims(adj,v,s);
    return 0;
}

