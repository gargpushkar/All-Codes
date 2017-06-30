#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left,*right;
};

node *newnode(int data)
{
	node *nn = new node;
	nn->data=data;
	nn->left = nn->right = NULL;
	return nn;
}

int areMirrorTree(node *l,node *r)
{
	if(l==NULL && r==NULL)
		return 1;
	if(l==NULL || r==NULL)
		return 0;
	return l->data==r->data &&areMirrorTree(l->left,r->right)&&areMirrorTree(l->right,r->left);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node *tree1,*tree2;
    
	tree1 = newnode(1);
    tree1->left=newnode(2);
    tree1->right=newnode(3);
    tree1->left->left=newnode(4);
    tree1->left->right=newnode(5);
    
    tree2 = newnode(1);
    tree2->right=newnode(2);
    tree2->left=newnode(3);
    tree2->right->right=newnode(4);
    tree2->right->left=newnode(5);
    
    areMirrorTree(tree1,tree2) ?cout<<"YES":cout<<"NO";
    
    return 0;
}

