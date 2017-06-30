#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int n;
bool isconnected(int a, int b)
{
	if(arr[a] == arr[b])	return true;
	return false;
}

void makeunion(int a, int b)
{
	if(!isconnected(a,b))
	{
		int aid = arr[a];
		int bid = arr[b];
		for(int i=0;i<n;i++)
			if(aid == arr[i])	arr[i]=bid;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++)
    	arr[i] = i;
    int e;	//edges
    cin>>e;
    for(int i=0;i<e;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	makeunion(a,b);
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
    return 0;
}

