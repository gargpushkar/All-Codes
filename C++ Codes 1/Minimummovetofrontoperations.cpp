//http://practice.geeksforgeeks.org/problems/minimum-move-to-front-operations/0
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
        int expecteditem=n;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(arr[i]==expecteditem)
	            expecteditem--;
	    }
	    cout<<expecteditem<<"\n";
	}
	return 0;
}
