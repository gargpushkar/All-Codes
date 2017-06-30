#include <bits/stdc++.h>
using namespace std;

long long coun;

void dfs(int s,int visited[], vector<int>list[])
{
	visited[s]=1;
	coun++;
	vector<int>l =list[s];
	for(int i=0;i<l.size();i++)
	{
		if(!visited[l[i]])
		{
			dfs(l[i],visited,list);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>list[n];
    int visited[n];
    memset(visited,0,sizeof(visited));
    for(int i=0;i<m;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	list[a].push_back(b);
    	list[b].push_back(a);
	}
	long long vv=0;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			coun=0;
			dfs(i,visited,list);
			ans+= vv*coun;
			vv=coun+vv;
		}
	}
	cout<<ans;
    return 0;
}

