#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int ans;
int minnumberofjumps(int i, int jump ,int n)
{
	if(i>=n-1)
		return jump ;
		
	ans=INT_MAX;
	for(int j=1;j<=arr[i];j++)
	{
		ans = min(ans,minnumberofjumps(i+j,jump+1,n));
	}
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<minnumberofjumps(0,0,n);
    return 0;
}
