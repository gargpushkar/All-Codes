//http://www.geeksforgeeks.org/find-four-elements-a-b-c-and-d-in-an-array-such-that-ab-cd/
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
    	cin>>arr[i];
    map<int, pair<int , int> >mp;
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		int sum = arr[i] + arr[j];
    		if(mp.find(sum)==mp.end())
    		{
    			mp[sum] = make_pair(arr[i] , arr[j]);
			}
			else
			{
				pair<int, int>p = mp[sum];
				cout<<p.first<<" "<<p.second<<" "<<arr[i]<<" "<<arr[j];
				return 0;
			}
		}
	}
    return 0;
}

