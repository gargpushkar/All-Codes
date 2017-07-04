#include <bits/stdc++.h>
using namespace std;

int size[10000];
int arr[10000];

int root(int a)
{
	while(a!=arr[a])
	{
		arr[a] = arr[arr[a]];
		a=arr[a];
	}
	return a;
}

void makeunion(int aa, int bb)
{
	if(size[aa] < size[bb])
	{
		arr[aa]=bb;	
		size[bb]+=size[aa];
	}
	else
	{
		arr[bb]=aa;
		size[aa]+=size[bb];
	}
}
set<pair<int, int> >st;
int kruskal(vector<pair<int , pair<int, int> > >adj, int nodes)
{
	int ed=0;
	int ans=0;
	vector<pair<int,pair<int, int> > >::iterator it;
	for(it=adj.begin();it!=adj.end();it++)
	{
		int u= (*it).second.first;
		int v= (*it).second.second;
		int aa=root(u);
		int bb=root(v);
		if(aa != bb)
		{
			st.insert({u,v});
			ed++;
			makeunion(aa,bb);
			ans+=(*it).first;
		}
		if(ed==nodes-1)
			return ans;
	}
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    
    int v,e;
    cin>>v>>e;
    for(int i=0;i<=v;i++)
    {
    	size[i]=1;
    	arr[i]=i;
	}
    vector<pair<int, pair<int, int> > >adj;
    for(int i=0;i<e;i++)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	adj.push_back(make_pair(c,make_pair(a,b)));
	}
    sort(adj.begin(),adj.end());
    cout<<kruskal(adj,v);
/*    set<pair<int,int> >::iterator it;
    cout<<"\n";
    for(it=st.begin();it!=st.end();it++)
    {
    	cout<<(*it).first<<" "<<(*it).second<<"\n";
	}*/
    return 0;
}

