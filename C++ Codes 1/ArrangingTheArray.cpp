//http://practice.geeksforgeeks.org/problems/arranging-the-array/0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
	    cin>>n;
	    int arr[n];
	    queue<int>q1,q2;
		for(int i=0;i<n;i++)
	    {
	    	cin>>arr[i];
	    	if(arr[i] < 0)
	    		q1.push(arr[i]);
	    	else
	    		q2.push(arr[i]);
	    }
	    int i=0;
	    while(!q1.empty())
	    {
	    	arr[i++] = q1.front();
	    	q1.pop();
		}
		while(!q2.empty())
		{
			arr[i++] = q2.front();
			q2.pop();
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
    
    return 0;
}

