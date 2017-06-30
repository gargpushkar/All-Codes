#include <bits/stdc++.h>
using namespace std;
vector<int>vec[100];
int visited[100];
void dfs(int s)
{
	visited[s]=1;
	cout<<s<<" ";
	for(int i=0;i<vec[s].size();i++)
	{
		if(!visited[vec[s][i]])
			dfs(vec[s][i]);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v;
    cin>>n>>v;
	int a,b;
    for(int i=0;i<v;i++)
    {
    	cin>>a>>b;
    	vec[a].push_back(b);
		vec[b].push_back(a);
	}
	cout<<"\nADJACENCY LIST\n";
	for(int i=0;i<v;i++)
	{
		cout<<i<<" : ";
		for(int j=0;j<vec[i].size();j++)
			cout<<vec[i][j]<<" ";
		cout<<"\n";
	}
	
	memset(visited,0,sizeof(visited));
	int connectedComponents=0;
	cout<<"BFS: TRAVERSAL for single node : ";
	
//	dfs(2);
	
	cout<<"BFS: TRAVERSAL for all node : ";
	memset(visited,0,sizeof(visited));
	
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
			connectedComponents++;
		}
		
	}
	cout<<endl<<"Connected Components: "<<connectedComponents;
    return 0;
}

