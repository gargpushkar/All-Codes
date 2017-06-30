#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100000];
bool fl;
int root(int a)
{
	while(a!=arr[a])	a=arr[a];
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
		int i=root(a);
		int j=root(b);
		arr[i]=j;
	}
	else
	{
		fl=true;	//cycle detected
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fl=false;	int count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    	arr[i]=i;
    int q;
    cin>>q;
    while(q--)
    {
    	int a,b;
    	cin>>a>>b;
    	makeunion(a,b);
    }
    if(fl)
    {
    	cout<<"YES";	//cycle detected
    }	//after this is extra that whether the given graph is a tree or not
    else
    {
    	for(int i=0;i<n;i++)
    	{
    		if(arr[i]==i)	count++;
		}
		if(count>1)
			cout<<"NOO";		//not a tree i.e. not connected 
		else
			cout<<"NO";		//no cycle	
	}
    return 0;
}

