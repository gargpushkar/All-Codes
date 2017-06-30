#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100000];

int root(int a)
{
	while(arr[a]!=a)	a=arr[a];
	return a;
}

bool isconnected(int a, int b)
{
	if(root(a) == root(b))	return true;
	return false;
}

void makeunion(int a, int b)
{
	if(!isconnected(a,b))
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
    for(int i=0;i<n;i++)
    	arr[i] = i;
    while(e--)
    {
    	int a,b;
    	cin>>a>>b;
    	makeunion(a,b);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
    return 0;
}

