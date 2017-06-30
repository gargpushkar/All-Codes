#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
        int sum;
        cin>>sum;
	    sort(arr,arr+n);
	    for(int i=0;i<n-3;i++)
	    {
	        for(int j=i+1;j<n-2;j++)
	        {
        	    int l=j+1,r=n-1;
	            while(l<r)
	            {
	                if(arr[i] + arr[j] + arr[l] + arr[r] == sum)
                    {
                        cout<<"1\n";
                        goto q;
                    }
                    else if(arr[i] + arr[j] + arr[l] + arr[r] > sum)
                        r--;
                    else
                        l++;
	            }
	        }
	    }
	    cout<<"0\n";
	    q: ;
	}
	return 0;
}
