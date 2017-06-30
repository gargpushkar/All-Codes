#include <bits/stdc++.h>
using namespace std;

bool mysort(pair<int , int>p1,pair<int,int>p2)
{
	
	if(p1.first > p2.first && p1.second >= p2.second)
		return 1;
	if(p1.second > p2.second)
		return 1;
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> >vec;
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	vec.push_back(make_pair(a,b));
	}
	sort(vec.begin(),vec.end(),mysort);
	int ans=0;
for(int i=0;i<n;i++)
	{
		if(i<k)
			ans+=vec[i].first;
		else
		{
			if(vec[i].second==0)
				ans+=vec[i].first;
			else
				ans-=vec[i].first;
		}
	}
	cout<<ans;
    return 0;
}

