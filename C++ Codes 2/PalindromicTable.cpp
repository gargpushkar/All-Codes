#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int ar[10];
    memset(ar,0,sizeof(ar));
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		int a;
    		cin>>a;
    		arr[i][j] = a;
    		ar[arr[i][j]]++;
		}
	}
	int fla=0;
	for(int i=0;i<10;i++)
	{
		if(ar[i]&1)
			fla++;
	}
	if(fla>1)
		cout<<(n-1)*(m-1)<<endl<<"0 0 "<<n-1<<" "<<m-1;
	else
		cout<<n*m<<endl<<"0 0 "<<n-1<<" "<<m-1;
		
   return 0;
}

