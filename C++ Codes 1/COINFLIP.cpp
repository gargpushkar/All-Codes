#include<bits/stdc++.h>

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
		int g;
		cin>>g;
		while(g--)
		{
			int a,b,c;
			cin>>a>>b>>c;
			if((b&1)==0)
				cout<<b/2<<"\n";
			else if(a==1 && c==1)
				cout<<b/2<<"\n";
			else if(a==1 && c==2)
				cout<<b/2+1<<"\n";
			else if(a==2 && c==1)
				cout<<b/2+1<<"\n";
			else if(a==2 && c==2)
				cout<<b/2<<"\n";
			
		}
	}

}
