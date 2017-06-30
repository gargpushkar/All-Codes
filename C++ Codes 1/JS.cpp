#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s;
    int n;
    cin>>s>>n;
    vector<pair<int,int> >vec;
    int k=n;
    while(k--)
    {
    	int a,b;
    	cin>>a>>b;
    	vec.push_back(make_pair(a,b));
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++)
	{
		if(s <= vec[i].first)
		{
			cout<<"NO";
			return 0;
		}
		else
		{
			s+=vec[i].second;
		}
	}
	cout<<"YES";
    return 0;
}

