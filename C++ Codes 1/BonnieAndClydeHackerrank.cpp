#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100000];

int root(int a)
{
	while(arr[a]!=a)
	{
		a=arr[a];
	}
	return a;
}
int rr[1000000];
int rootb(int a, int c)
{
	if(a==c)
	{
		return 1;
	}
	while(a!=arr[a])
	{
		if(rr[a])
			return 0;
		rr[a]++;
		a=arr[a];
		
		if(a==c)
		{
			return 1;
		}
	}
	return 0;
}



void makeunion(int a, int b)
{
	{
		int aa=root(a);
		int bb=root(b);
		arr[aa] = bb;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int e;
    cin>>e;
    int q;
    cin>>q;
    for(int i=0;i<n;i++)
    	arr[i] = i;
    while(e--)
    {
    	int a,b;
    	cin>>a>>b;
    	makeunion(a,b);
	}
	while(q--)
	{
		int a,b,c;
		cin>>a>>b>>c;
	    memset(rr,0,sizeof(rr));
		rr[c]=-1;
		if(rootb(a,c)== rootb(b,c))
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
    return 0;
}

