using namespace std;
#include<bits/stdc++.h>
int arr[10000][10000];

void robot(int i, int j, int n,int m)
{
//	cout<<"i= "<<i<<" j="<<j<<endl;
    if(i< 0 || j < 0 || i>= n || j >= m || arr[i][j] == -1 || arr[i][j] == 1)
        return ;
    if(arr[i][j] == 0)
    	arr[i][j]=1;
    robot(i+1,j,n,m);
    robot(i-1,j,n,m);
    robot(i,j+1,n,m);
    robot(i,j-1,n,m);
}

int main()
{
	int n,m,b;
	cin>>n>>m>>b;
	int ans=0;
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	        arr[i][j] =0;
	for(int i=0;i<b;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    arr[a][b]=-1;
	}
/*	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	        cout<<arr[i][j]<<" ";
		cout<<endl;
	}*/
	while(1)
	{
	//	cout<<"de";
	    ans++;
	    int c=-1,d=-1;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j] == 0)
	            {
	                c=i;
	                d=j;
	                break;
	            }
	        }
	        if(c!=-1 && d!=-1)
	            break;
	    }
	    if(c==-1 && d==-1)
	        break;
	    cout<<"c="<<c<<" d="<<d<<endl;
	    robot(c,d,n,m);
	}
		for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	        cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	cout<<ans-1;
	return 0;
}
