// FOR 0 BAsed indexing

#include <bits/stdc++.h>
using namespace std;

int prims(vector<pair<int,int> >adj[], int nodes)
{
	int source=0;
	int edg=0;
	priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > >pq;
	pq.push({0,source});
	
	vector<int>key(nodes+1,9999999);	// dist array of dijkstra
	
	vector<int> parent(nodes+1,-1);
	
	int visited[nodes+1];	//	visited array
	memset(visited,0,sizeof(visited));
	int ans=0;
	while(edg<nodes)
	{
		int u = pq.top().second;
		pq.pop();
		edg++;
		visited[u]=1;
		for(int i=0;i<adj[u].size();i++)
		{
			int v = adj[u][i].first;
			int weight = adj[u][i].second;
			if(!visited[v] && key[v]>weight)
			{
				key[v] = weight;
				pq.push({key[v],v});
				parent[v]=u;
			}
		}
	}
	for(int i=1;i<nodes;i++)	//edges in mst are stored from i=1 to n
	{
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
    	adj[a].push_back({b,c});
    	adj[b].push_back({a,c});
	}
	
	cout<<prims(adj,v);
	
    return 0;
}
/*
5 7
0 1 20
0 2 50
0 3 70
0 4 90
1 2 30
2 3 40
3 4 60
1
*/

