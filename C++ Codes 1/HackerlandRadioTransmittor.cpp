#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
	    cin>>arr[i];
	sort(arr,arr+n);
	int ans=0;
	int i=0;
	while(i<n)
	{
		ans++;
		int maxloc = arr[i] +k;
		while(maxloc >=arr[i])
			i++;
		maxloc = arr[--i] +k;
		while(maxloc >= arr[i] )
			i++;
		
	}
	cout<<ans;
    return 0;
}

