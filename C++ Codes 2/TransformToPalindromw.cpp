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

int poop(int st[],int i,int j)
{
	if(j==i)
		return 1;
	if(isconnected(st[i],st[j]) && i+1==j)
		return 2;
	if(isconnected(st[i],st[j]))
		return 2+poop(st,i+1,j-1);
	return max(poop(st,i+1,j), poop(st,i,j-1));
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
	int st[m];
	for(int i=0;i<m;i++)
		cin>>st[i];
		
	int i, j,k;
   	int dp[m][m]; 
   	memset(dp,0,sizeof (dp));
   	for(i=0;i<m;i++)
      dp[i][i]=1;
    for (i=2;i<=m;i++)
    {
        for (j=0;j<m-i+1;j++)
        {
            k= j+i-1;
            if ( isconnected(st[j],st[k])&&i == 2)
               dp[j][k] = 2;
            else if (isconnected(st[j],st[k]))
               dp[j][k] = dp[j+1][k-1] + 2;
            else
               dp[j][k] = max(dp[j][k-1], dp[j+1][k]);
        }
    }
    cout<<dp[0][m-1];
//	cout<<poop(st,0,m-1);
    return 0;
}

