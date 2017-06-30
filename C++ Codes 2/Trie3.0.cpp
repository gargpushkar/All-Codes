#include <bits/stdc++.h>
using namespace std;

struct trie
{
	map<char , trie*>child;
	bool eow;
	trie(bool flag)
	{
		this->eow = flag;
	}
};

void insert(string word,trie *head)
{
	trie *curr=head;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if((curr->child).find(ch)!=(curr->child.end()))
		{
			curr=curr->child[ch];
		}
		else
		{
			trie *temp = new trie(false);
			curr->child[ch]=temp;
			curr=curr->child[ch];
		}
	}
	curr->eow=true;
}

bool search(string word,trie *root)
{
	trie *curr=root;
	for(int i=0;word[i];i++)
	{
		char ch = word[i];
		if((curr->child).find(ch)!=(curr->child).end())
		{
			curr=curr->child[ch];
		}
		else
		{
			return false;
		}
	}
	return curr->eow;
}

bool del(string word,trie *head,int index)
{
	if(index == word.length())
	{
		if(head->eow==false)	// word is not present in the trie
			return false;
		head->eow=false;	// word deleted
		return (head->child).size() == 0;	// word has no other mapping i.e. currents' map is empty
			
	}
	char ch = word[index];
	trie *curr;
	if((head->child).find(ch)==(head->child).end())
		return false;
	curr = head->child[ch];
	
	bool shouldDeleteTheCurrentNode = del(word,curr,index+1);
	
	if(shouldDeleteTheCurrentNode)
	{
		curr->child.erase(ch);
		return curr->child.size() ==0;
	}
	return false;
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);    cout.tie(NULL);
    cout<<"Enter the number of words you want to add in Trie : ";
    int n;
	cin>>n;
	string word[n];
	trie *head = new trie(false);
	cout<<"Enter the words : \n";
	for(int i=0;i<n;i++)
	{
		cin>>word[i];
	}
	cout<<"Inserting in the Trie..........\n";
	for(int i=0;i<n;i++)
	{
		insert(word[i],head);
	}
	cout<<"Insertion Successfull..........\n";
	cout<<"Enter the number of words you want to search : ";
	cin>>n;
	cout<<"Enter the words : \n";
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		search(a,head)?cout<<"The word is Present.\n" : cout<<"The word is not present.\n";
	}
	
	cout<<"Enter the words to delete : \n";
	cin>>n;
	cout<<"Enter the words \n";
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		del(a,head,0);
	}
	
	cout<<"Enter the number of words you want to search : ";
	cin>>n;
	cout<<"Enter the words : \n";
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		search(a,head)?cout<<"The word is Present.\n" : cout<<"The word is not present.\n";
	}

    return 0;
}

