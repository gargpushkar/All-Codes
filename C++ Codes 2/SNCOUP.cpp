#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; int ans1=0,ans2=0; bool flag1=false,flag2=false;
		cin>>n;
		char arr[2][n];
		for(int i=0;i<n;i++)
			cin>>arr[0][i];
		for(int i=0;i<n;i++)
			cin>>arr[1][i];
	//		cout<<"\n";
/*		for(int i=0;i<2;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}*/
		for(int i=0;i<n;i++)
		{
			if(arr[0][i]=='*' && arr[1][i]=='*')
			{
//				cout<<"a\n";
				flag1=true;
				flag2=true;
				ans1++;
			}
			else if((arr[1][i]=='*' && arr[0][i] == '.') )
			{
//				cout<<"b\n";
				ans1++;
				flag1=true;
			}
			else if((arr[0][i]=='*' && arr[1][i] == '.'))
			{
				ans1++;
				
				flag2=true;
			}
		}
		ans1-=1;
//		cout<<ans1<<" "<<ans2;
		if(flag1==true && flag2==true)	
			cout<<ans1+1<<endl;
		else
			cout<<ans1;
	}
	return 0;
}
