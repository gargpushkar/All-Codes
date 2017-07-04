#include <bits/stdc++.h>
using namespace std;

int sz[100001];
int arr[100001];

int root(int a)
{
	while(a!=arr[a])
	{
		a=arr[a];
	}
	return a;
}

void connect(int a, int b)
{
	int ra=root(a);
	int rb=root(b);
	if(ra!=rb)
	{
		if(sz[ra]<sz[rb])
		{
			arr[ra]=rb;
			sz[rb]+=sz[ra];
		}
		else
		{
			arr[rb]=ra;
			sz[ra]+=sz[rb];
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n, q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
		arr[i]=i;
    	sz[i]=1;
	}
	while(q--)
    {
    	char ch;
    	cin>>ch;
    	if(ch=='Q')
    	{
    		int a;
    		cin>>a;
    		cout<<sz[root(a)]<<"\n";
		}
		else
		{
			int a,b;
			cin>>a>>b;
			connect(a,b);
		}
	}
    return 0;
}

