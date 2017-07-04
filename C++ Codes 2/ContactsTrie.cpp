#include <bits/stdc++.h>
using namespace std;

struct Trie
{
	map<char,Trie *>child;
	int c;
	Trie()
	{
		this->c=0;
	}
};

void insert(Trie *head, string word)
{
	Trie *curr=head;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if((curr->child).find(ch)!=(curr->child).end())
		{
			curr = curr->child[ch];
		}
		else
		{
			Trie *nn = new Trie();
			curr->child[ch]=nn;
			curr=nn;
		}
		curr->c++;
	}
}

int search(Trie *head,string word)
{
	Trie *curr=head;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if((curr->child).find(ch)!=(curr->child.end()))
		{
			curr=curr->child[ch];
		}
		else
			return 0;
	}
	return curr->c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int n;
    cin>>n;
    Trie *head=new Trie();
    for(int i=0;i<n;i++)
    {
    	string a,b;
    	cin>>a>>b;
    	if(a.compare("add")==0)
    	{
    		insert(head,b);
		}
		else
		{
			cout<<search(head,b)<<"\n";
		}
	}
    return 0;
}

