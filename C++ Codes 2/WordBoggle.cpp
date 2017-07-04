//http://practice.geeksforgeeks.org/problems/word-boggle/0
#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};

vector<string>st;
set<string>an;
int visited[10][10]={0};
char arr[10][10];
bool isSafe(string p,int i, int j, int a, int b,string ans)
{
	int l=ans.length();
	if(l < p.length() && i>=0 && j>=0 && i<a && j<b && visited[i][j]==0 && arr[i][j] == p[l])
		return true;
	return false;
}

void dfs(string p,int i, int j, int a, int b,string ans)
{
	visited[i][j]=1;
	ans+=arr[i][j];
	if(p==ans)
	{
		an.insert(ans);
	}
	for(int k=0;k<8;k++)
	{
		int aa=i+dx[k];
		int bb=j+dy[k];
		if(isSafe(p,aa,bb,a,b,ans))
			dfs(p,aa,bb,a,b,ans);
	}
	visited[i][j]=0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	st.clear();
    	an.clear();
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		string tt;
    		cin>>tt;
    		st.push_back(tt);
		}
		int a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
					if(st[k][0]==arr[i][j])
					{
						string ans="";
						memset(visited,0,sizeof(visited));
						dfs(st[k],i,j,a,b,ans);
					}
				}
			}
		}
		if(an.size()!=0)
		{
			set<string> :: iterator it;
			for(it=an.begin();it!=an.end();it++)
				cout<<*it<<" ";
			cout<<"\n";
		}
		else
			cout<<-1<<"\n";
	}
    return 0;
}

