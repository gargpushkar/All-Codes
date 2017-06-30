#include <bits/stdc++.h>
using namespace std;
//INCOMPLETE
struct btree
{
	int data;
	tree *left;
	tree *right;
};

struct DLL
{
	int data;
	DLL *next;
	DLL *prev;
};

DLL *create(int data)
{
	DLL *nn=new DLL;
	nn->data=data;
	nn->next=NULL;
	nn->prev=NULL;
	return nn;
}

void BinrayTree2DLL(btree* node, DLL *start)
{
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

