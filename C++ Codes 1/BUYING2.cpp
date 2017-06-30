#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,c;
    	cin>>n>>c;
    	int arr[n];
    	int sum=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
			sum+=arr[i];		
		}
		if(sum%c==0)
		{
			cout<<sum/c<<"\n";
		}
		else
		{
			int a = sum/c;
			sum -=*min_element(arr,arr+n);
			if(a == sum/c)
				cout<<-1<<"\n";
			else
			{
				cout<<a<<"\n";
			}
		}
    }
    return 0;
}

