//https://www.codechef.com/problems/FLIPCOIN
#include <bits/stdc++.h>
using namespace std;
int n;
void createSegmentTree(int segtree[], int arr[], int start, int end, int node)
{
	if(start == end)
		segtree[node] = arr[start];
	else
	{
		int mid = (end+start)/2;
		createSegmentTree(segtree,arr,start,mid,2*node);
		createSegmentTree(segtree,arr,mid+1,end,2*node+1);
		segtree[node] = segtree[2*node] + segtree[2*node+1];
	}
}

int queryRange(int segtree[], int lazy[], int node, int start, int end, int l, int r)
{
	if(l > end || r < start)
		return 0;
	
	if(lazy[node]==1)
	{
		segtree[node] = (end-start+1) - segtree[node];
		if(start != end)
		{
			lazy[2*node] = 1-lazy[2*node];
			lazy[2*node+1]=1-lazy[2*node+1];
		}
		lazy[node]=0;
	}
	
	if(l <= start && r >= end)
		return segtree[node];
	int mid = (start + end)/2;
	int x=queryRange(segtree,lazy,2*node,start,mid,l,r);
	int y=queryRange(segtree,lazy,2*node+1,mid+1,end,l,r);
	return x+y;
}

void updateRange(int segtree[], int lazy[],int node, int start, int end, int l, int r)
{
	if(lazy[node]!=0)
	{
		segtree[node]= (end-start+1)- segtree[node];
		if(start!=end)
		{
			lazy[2*node]=1-lazy[2*node];
			lazy[2*node+1]=1-lazy[2*node+1];
		}
		lazy[node]=0;
	}
	
	if(l>end || r< start)
		return ;
	if(start >= l && end <= r)
	{
		segtree[node] = (end-start+1) - segtree[node];
		if(start!=end)
		{
			lazy[2*node] = 1-lazy[2*node];
			lazy[2*node+1]=1-lazy[2*node+1];
		}
		return ;
	}
	int  mid = (start+end)/2;
	updateRange(segtree,lazy,2*node,start,mid,l,r);
	updateRange(segtree,lazy,2*node+1,mid+1,end,l,r);
	segtree[node] = segtree[2*node]+segtree[2*node+1];
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;	int q;	cin>>q;
    n++;
    int segtree[4*n];
    int lazy[4*n];
    memset(lazy,0,sizeof(lazy));
    memset(segtree,0,sizeof(segtree));
   	while(q--)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	b++;
    	c++;
    	if(a)
    	{
    		cout<<queryRange(segtree,lazy,1,1,n,b,c)<<"\n";
		}
		else
		{
			updateRange(segtree,lazy,1,1,n,b,c);
		}
	}
    return 0;
}

