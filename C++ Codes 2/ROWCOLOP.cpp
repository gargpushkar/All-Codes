#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	int n,q;
	cin>>n>>q;
	int row[n];
	int col[n];
	memset(col,0,sizeof(col));
	memset(row,0,sizeof(row));
	while(q--)
	{
		string a;
		cin>>a;
		int b,c;
		cin>>b>>c;
		if(a == "RowAdd")
		{
			row[b]+=c;
		}
		else
		{
			col[b]+=c;
		}
	}
	cout<< *max_element(row,row+n) + *max_element(col,col+n);
	return 0;
}
