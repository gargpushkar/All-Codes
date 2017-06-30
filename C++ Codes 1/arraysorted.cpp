//http://www.geeksforgeeks.org/check-whether-given-array-k-sorted-array-not/
#include <bits/stdc++.h>
using namespace std;

// function to check whether the given array is
// a 'k' sorted array or not
int iskSortedArray(int arr[],int n,int k)
{
	for(int i=1;i<=n;i++)
	{
		//if abs(i-arr[i] > k) then that element is not at-most k distance away from its position
		// thus array is not k-sorted
		if(abs(i-arr[i])>k)
			return 0;
	}
	//array is k sorted
	return 1;
}
// Driver program to test above
int main()
{
    // Enter the size of array n and the value of k
    int n,k;
    cin>>n>>k;
    // create array with size n+1 just to make our calculations easy
    int arr[n+1];
    // Initialize arr[0]==0 even though we will never use it.
    arr[0]=0;	
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
	}
	iskSortedArray(arr,n,k)?cout<<"Yes":cout<<"No";
    return 0;
}

