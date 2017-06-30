#include <bits/stdc++.h>
using namespace std;

struct Trie
{
	map<char, Trie *>child;
	bool eow;
	Trie(bool flag)
	{
		this->eow=flag;
	}
};

int insert(string word,Trie *head)
{
	Trie *curr=head;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if(curr->eow==true)
			return 0;
		if((curr->child.find(ch))!=(curr->child).end())
		{
			curr = curr->child[ch];
		}
		else
		{
			Trie *nn = new Trie(false);
			curr->child[ch]=nn;
			curr=curr->child[ch];
		}
	}
	if(curr->eow==true)
		return 0;
    if(curr->eow == false)
	{
		if(curr->child.size()!=0)
			return 0;
	}
	curr->eow=true;
	return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n;
    cin>>n;
    Trie *root = new Trie(false);
    for(int i=0;i<n;i++)
    {
    	string a;
    	cin>>a;
    	if(insert(a,root)==0)
    	{
    		cout<<"BAD SET\n";
    		cout<<a;
    		return 0;
		}
	}
    cout<<"GOOD SET";
    return 0;
}

