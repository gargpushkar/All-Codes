//http://www.spoj.com/problems/GSS1/
//incomplete
#include <bits/stdc++.h>
using namespace std;

void createSegTree(int segtree[], int arr[], int start, int end, int node)
{
	if(start==end)
	{
		segtree[node] = arr[start];
	}
	else
	{
		int mid=start + (end-start)/2;
		createSegTree(segtree,arr,start,mid,2*node);
		createSegTree(segtree,arr,mid+1,end,2*node+1);
		if(segtree[2*node]>=0 && segtree[2*node+1]>=0)
			segtree[node] = segtree[2*node] + segtree[2*node+1];
		else
			segtree[node] = max(segtree[2*node],segtree[2*node+1]);
	}
}

int query(int segtree[], int start, int end, int l, int r , int node)
{
	if(l>end || r < start)
		return -1500007;
	if(l<=start && r>=end)
		return segtree[node];
	int mid = start + (end-start)/2;
	int x = query(segtree,start,mid,l,r,2*node);
	int y = query(segtree,mid+1,end,l,r,2*node+1);
	return max(x,y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
	}
	int segtree[4*n];
	memset(segtree,0,sizeof(segtree));
	createSegTree(segtree,arr,1,n,1);
	int m;
	cin>>m;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		cout<<query(segtree,1,n,a,b,1)<<"\n";
	}
    return 0;
}
/*
test case: 
5 
3 -10 100 -2 20 
1 
1 5 
output: 
118
*/
