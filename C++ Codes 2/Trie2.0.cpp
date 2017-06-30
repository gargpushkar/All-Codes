#include <bits/stdc++.h>
using namespace std;

struct Trie
{
	map<char,Trie*>child;
	bool eow;
	Trie(bool flag){
		this->eow = flag;
	}
};
//pair<char, Trie*>p;
void inser(Trie *root, string word)
{
	Trie *curr = root;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if( (curr->child).find(ch)!=(curr->child).end())
		{
			curr = curr->child[ch];
		}
		else
		{
			Trie *temp = new Trie(false);
			curr->child[ch] = temp;
			curr = curr->child[ch];
		}
	}
	curr->eow=true;
}

bool search(Trie *root, string word)
{
	Trie *curr=root;
	for(int i=0;word[i];i++)
	{
		if((curr->child).find(word[i])!=(curr->child).end()){
			curr = curr->child[word[i]];
		}
		else
			return false;
	}
	return curr->eow;
}

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
	Trie *root = new Trie(false) ;
	for(int i=0;i<n;i++)
	{
		cout<<"/./././././././././../..././././././././.././...."<<endl;
		inser(root,st[i]);
	}
	cout<<"Insertion done\n\n";
	cout<<"Enter the number of strings you wanna search : ";
	cin>>n;
	cout<<"Enter the string you wanna search\n";
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		search(root,a) ? cout<<"String is present\n":cout<<"String is not present\n";
	}
    return 0;
}
