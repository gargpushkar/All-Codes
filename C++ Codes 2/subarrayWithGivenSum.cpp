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
	    int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int i=0,j=0,temp=0; int flag=0;
	    temp=arr[0];
	    while(j<n)
	    {
	        if(temp < sum)
	        {
	            j++;
	            temp+=arr[j];
	            
	        }
	        else if(temp>sum)
	        {
	            temp-=arr[i];
	            i++;
	        }
	        else
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag)
	        cout<<i+1<<" "<<j+1<<endl;
	    else
	        cout<<-1<<"\n";
	}
	return 0;
}
