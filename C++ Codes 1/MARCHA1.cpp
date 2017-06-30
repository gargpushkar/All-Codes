#include <bits/stdc++.h>
using namespace std;
int findSubset(int arr[], int i, int n, int sum, int sum1)
{
	if(i>n || sum1 > sum)
		return 0;
	if(sum1==sum)
		return 1;
	return findSubset(arr,i+1,n,sum,sum1+arr[i]) + findSubset(arr,i+1,n,sum,sum1);
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    cin>>t;
    string binary = bitset<8>(t).to_string();
    cout<<binary;
	while(t--)
    {
    	int n,sum,sum1=0;
    	cin>>n>>sum;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		findSubset(arr,0,n,sum,sum1) ? cout<<"YES" : cout<<"NO";
		cout<<"\n";
	}
    return 0;
}

