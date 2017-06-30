//http://www.geeksforgeeks.org/sum-minimum-absolute-difference-array-element/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	sort(arr,arr+n);
	int ans=0;
	for(int i=1;i<n-1;i++)
	{
		ans+= min(abs(arr[i]-arr[i-1]) , abs(arr[i]-arr[i+1]));
	}
	ans+=abs(arr[0] - arr[1]) + abs(arr[n-1]-arr[n-2]);
	cout<<ans;
    return 0;
}

