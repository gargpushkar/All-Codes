#include<bits/stdc++.h>

using namespace std;
int a,b,c;
vector<int>vec[10000];		//vector<int>vec[n]
int vis[10000];
int dfs(int s)
{
	vis[s] = 1;
	for(int i=0;i<vec[s].size();i++)
	{
		if(!vis[vec[s][i]])
		{
			if(vec[s][i] == c)
				return 1;
			else
				dfs(vec[s][i]);
		}
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int e;
	cin>>e;
	int q;
	cin>>q;
	memset(vis,0,sizeof(vis));
	while(e--)
	{
		int a,b;
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	while(q--)
	{
		cin>>a>>b>>c;
		
		dfs(a)&&dfs(b) ? cout<<"YES\n":cout<<"NO\n";
	}
	
}
