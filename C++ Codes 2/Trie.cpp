#include <bits/stdc++.h>
using namespace std;
// INCORRECT
struct Trie
{
	map<char,Trie *>child;
	bool eow;
};
pair<char, Trie*>p;
void inser(Trie *root, string word)
{
	Trie *curr = root;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if((curr->child).find(ch))!=(curr->child).end())
		{
			curr = curr->child[ch];
		}
		else
		{			
			Trie *temp = new Trie();
			curr->child[ch] = temp;
			
		}
	}
	curr->eow=true;
}
/*
bool search(Trie *root, string word)
{
	Trie *curr=root;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		Trie *temp = curr->mp[ch];
		if(temp == NULL)
			return false;
		curr=temp;
	}
	return curr->eow;
}*/

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);    cout.tie(NULL);
	cout<<"Enter the number of strings you want to enter : ";
    int n;
    cin>>n;
    cout<<"Enter the strings: \n";
    string st[n];
    for(int i=0;i<n;i++)
    {
    	cin>>st[i];
	}
	cout<<"Creating Trie\n";
	Trie *root=new Trie();
	root=NULL;
	for(int i=0;i<n;i++)
	{
		cout<<"/./././././././././../..././././././././.././...."<<endl;
		inser(root,st[i]);
	}
	cout<<"Insertion done\n\n";
	cout<<"Enter the number of strings you wanna search : ";
	cin>>n;
	cout<<"Enter the string you wanna search";
/*	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		search(root,a) ? cout<<"String is present\n":cout<<"String is not present\n";
	}*/
    return 0;
}

