#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	map<int , int>mp;
	pair<int , int>p=make_pair(2,2);
	mp.insert(p);
	vector<pair<int , int > >pp;
	pp.push_back(make_pair(1,3));
	pp.push_back(make_pair(2,3));
	pp.push_back(make_pair(2,1));
	pp.push_back(make_pair(6,9));
	pp.push_back(make_pair(1,4));
	pp.push_back(make_pair(1,2));
	int n = pp.size();
	sort(pp.begin(),pp.end());
	for(int i=0;i<n;i++)
	{
		cout<<pp[i].first<<" "<<pp[i].second<<endl;
	}
	return 0;
}
