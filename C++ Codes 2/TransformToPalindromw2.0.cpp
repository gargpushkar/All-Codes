#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int size[100005];

int root(int a)
{
	while(a!=arr[a])
	{
		arr[a] = arr[arr[a]];
		a=arr[a];
	}
	return a;
}

bool isconnected(int a,int b)
{
	if(root(a) == root(b))	return true;
	return false;
}

void makeunion(int a, int b)
{
	if(!isconnected(a,b))
	{
		int i = root(a);
		int j = root(b);
		if(size[i] < size[j])
		{
			arr[i] = j;	
			size[j]+=size[i];
		}
		else
		{
			arr[j]=i;
			size[i]+=size[i];
		}
	}
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        for(int i=1;i<=100001;i++)
    	arr[i]=i;
    memset(size,1,sizeof(size));
    int n,y,m;
    cin>>n>>y>>m;
    while(y--)
    {
    	int a,b;
    	cin>>a>>b;
    	makeunion(a,b);
	}
	int st1[m],st2[m];
	for(int i=0;i<m;i++)
	{
		cin>>st1[i];
		st2[m-i-1] = st1[i];
	}		
		
	int i, j,k;
   	int dp[m+1][m+1]; 
   	memset(dp,0,sizeof (dp));
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(isconnected(st1[i-1],st2[j-1]))
			{
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[m][m];
    return 0;
}

