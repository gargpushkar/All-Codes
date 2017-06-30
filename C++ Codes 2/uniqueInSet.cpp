#include<bits/stdc++.h>
using namespace std;

int main()
{
	string st;
	getline(cin,st);
	set<char>s(st.begin(),st.end());
	int n=s.size();
	if(s.find(' ')!=s.end())
		n--;
	cout<<n;
}
