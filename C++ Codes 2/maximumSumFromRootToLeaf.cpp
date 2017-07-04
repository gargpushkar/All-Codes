#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int getMaxSum(struct node *head)
{
	if(head==NULL)
		return 0;
	return head->data+ max( getMaxSum(head->left),getMaxSum(head->right));
}

struct node* newNode(int data)
{
	node* nn=new node;
	nn->data=data;
	nn->left=nn->right=NULL;
	return nn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);

    struct node *root = NULL;
 
    root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(7);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);
	cout<<getMaxSum(root);

    
    return 0;
}

