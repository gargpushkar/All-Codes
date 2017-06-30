#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a1,a2,a3,b1,b2,b3,c1,c2,c3;
		cin>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3;
		long a,b,c,d,e,f;
		a=a1+a2+a3;
		b=b1+b2+b3;
		c=c1+c2+c3;
		d=a1+b1+c1;
		e=a2+b2+c2;
		f=a3+b3+c3;
		long ans = max(max(max(max(max(a,b),c),d),e),f);
		if(ans&1)
			cout<<ans<<"\n";
		else
			cout<<ans-1<<"\n";
	}
	return 0;
} 
