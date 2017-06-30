#include <bits/stdc++.h>
using namespace std;

vector<int>vec[100000];
map<int , int>mp;
int c;
int dfs(int s)
{
	for(int i=0;i<vec[s].size();i++)
	{
		
			c++;
			dfs(vec[s][i]);
	}
	return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    int a,b;
    for(int i=0;i<n-1;i++)
    {
    	cin>>a>>b;
    	vec[a].push_back(b);
	}
	int arr[n+1];
	for(int i=0;i<=n;i++)
	{
		arr[i] =1;
	}
	for(int i=1;i<=n;i++)
	{
			c=0;
			arr[i] += dfs(i);
//		cout<<arr[i]<<" ";
	}
	for(int i=1;i<=n;i++)
	{
		arr[i] += arr[i-1];
	}
	while(q--)
	{
		int a,b;
		int sum=0;
		cin>>a>>b;
		cout<<arr[b]-arr[a-1]<<"\n";
	}
    return 0;
}

