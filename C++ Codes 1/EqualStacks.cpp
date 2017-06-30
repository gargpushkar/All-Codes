#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    queue<int>st1,st2,st3;
    int s1=0,s2=0,s3=0;
    for(int i=0;i<a;i++)
    {
    	int num;
    	cin>>num;
    	s1+=num;
    	st1.push(num);
	}
	for(int i=0;i<b;i++)
    {
    	int num;
    	cin>>num;
    	s2+=num;
    	st2.push(num);
	}
	for(int i=0;i<c;i++)
    {
    	int num;
    	cin>>num;
    	s3+=num;
    	st3.push(num);
	}
	if(s1==s2 && s2==s3)
	{
		cout<<s1;
		return 0;
	}
	if(s1==0 || s2==0 || s3==0)
	{
		cout<<0;
		return 0;
	}
	while(s1!=s2 && s2!=s3)
	{
//		cout<<"s1 = "<<s1<<" s2 = "<<s2<<" s3 = "<<s3<<"\n";
		if(s1 > s2 || s1 > s3)
		{
			int x = st1.front();
//			cout<<"x1 = "<<x<<"\n";
			st1.pop();
			s1-=x;
		}
		else if(s2 > s1 || s2 > s3)
		{
			int x = st2.front();
//			cout<<"x2 = "<<x<<"\n";
			st2.pop();
			s2-=x;
		}
		else if(s3 > s1 || s3 > s2)
		{
			int x = st3.front();
//			cout<<"x3 = "<<x<<"\n";
			st3.pop();
			s3-=x;
		}
	}
	cout<<s1;
    return 0;
}

