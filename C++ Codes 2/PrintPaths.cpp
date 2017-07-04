#include <bits/stdc++.h>
using namespace std;

/*
	path
	from top left to bottom right
*/

void printPath(int arr[][500], int i,int j, int n, int m,vector<int>vec)
{
	if(i==n || j==m)
		return;
	vec.push_back(arr[i][j]);
	printPath(arr,i+1,j,n,m,vec);
	printPath(arr,i,j+1,n,m,vec);
	
	if(vec[vec.size()-1] == arr[n-1][m-1])
	{
		for(int i=0;i<vec.size();i++)
		{
			cout<<vec[i]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);    cout.tie(NULL);
    int arr[500][500];
	int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
	    	cin>>arr[i][j];
	vector<int >vec;
	printPath(arr,0,0,n,m,vec);
    return 0;
}

