#include <bits/stdc++.h>
using namespace std;
int n,v;

int visited[10000];
vector<pair<int, int> >adj[10000];
int dist[10000];

void DijkstraShortestPath(int s)
{
	priority_queue<pair<int , int> , vector<pair<int, int> >, greater<pair<int,int> > >pq;
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
			int weight = adj[u][i].second;
			if(dist[v] > dist[u] + weight)
			{			
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v],v));
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<i<<" : "<<dist[i]<<"\n";
	}
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);    cout.tie(NULL);
	for(int i=0;i<10000;i++)
		dist[i]=99999;
    cin>>n>>v;
    for(int i=0;i<v;i++)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	// undirected graph with no cycles and -ve edges
    	adj[a].push_back(make_pair(b,c));
    	adj[b].push_back(make_pair(a,c));
	}
	cout<<"/////////////////////////////\n";
	DijkstraShortestPath(0);
    return 0;
}
/*
9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/
