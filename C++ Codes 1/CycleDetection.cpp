#include <bits/stdc++.h>
using namespace std;
vector<int>vec[100001];
int visited[100001];
//still wrong
void dfs(int s)
{
	visited[s]=1;
//	cout<<s<<" ";
	for(int i=0;i<vec[s].size();i++)
	{
		if(!visited[vec[s][i]])
			dfs(vec[s][i]);
	}
}

int containsCycle(int s, int parent)
{
	visited[s] = 1;
	for(int i=0;i<vec[s].size();i++)
	{
		if(!visited[vec[s][i]])
		{
			if(containsCycle(vec[s][i],s))
				return 1;
		}
		else if(vec[s][i] != parent)
			return 1;
	}
	return 0;
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
/*	cout<<"\nADJACENCY LIST\n";
	for(int i=0;i<v;i++)
	{
		cout<<i<<" : ";
		for(int j=0;j<vec[i].size();j++)
			cout<<vec[i][j]<<" ";
		cout<<"\n";
	}
*/	
	memset(visited,0,sizeof(visited));
	int connectedComponents=0;

	
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
			connectedComponents++;
		}
		
	}
	if(connectedComponents > 1)
	{
		cout<<"NO";
		return 0;
	}
	else
	{
		memset(visited,0,sizeof(visited));
		if(containsCycle(0,-1))
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
	}
    return 0;
}

