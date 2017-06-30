#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool comp(pair<int , int>p1 ,pair<int ,int>p2)
{
	if(p2.second > p1.second)
		return true;
	else if(p2.second == p1.second)
	{
		if(p1.first < p2.first)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main()
{
	vector<pair<int , int> >pp;
	pp.push_back(make_pair(900,910));
	pp.push_back(make_pair(940,1200));
	pp.push_back(make_pair(950,1120));
	pp.push_back(make_pair(1100,1130));
	pp.push_back(make_pair(1150,1900));
	pp.push_back(make_pair(1800,2000));
	sort(pp.begin(),pp.end(),comp);
	for(int i=0;i<6;i++)
		cout<<pp[i].first <<" "<<pp[i].second<<endl;
}
