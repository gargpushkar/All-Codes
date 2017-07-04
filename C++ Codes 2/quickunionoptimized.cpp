// weighted quickunion
// we use a size array and always change the root of smaller tree to larger tree
//** we can use path compression to make it further more optimized as it keeps almost comletely flat
//*** the code to path compression is just adding 1 line in root function.
#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100000];
int size[100000];
int root(int a)
{
	while(a!=arr[a])
	{
		arr[a] = arr[arr[a]];	//path compression
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
		if(size[i] < size[j])	//using weights
		{
			arr[i] = j;	// assigning root of i to the root of j
			size[j]+=size[i];
		}
		else
		{
			arr[j]=i;
			size[i]+=size[j];
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(size,1,sizeof(size));
    cin>>n;
    for(int i=0;i<n;i++)
    	arr[i]=i;
    int e;
    cin>>e;
    while(e--)
    {
    	int a,b;
    	cin>>a>>b;
    	makeunion(a,b);
	}
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
    return 0;
}

