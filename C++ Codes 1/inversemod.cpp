#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,m;
	cin>>a>>m;
	int i=1; int ans=0;
	while(1)
	{
		if((a*i)%m == 1)
		{
			ans=i;
			break;
		}
		i++;
	}
	cout<<ans;
}
