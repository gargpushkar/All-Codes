#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

node *newnode(int data)
{
	node *nn = new node;
	nn->data=data;
	nn->left=nn->right=NULL;
	return nn;
}

void mirror(node *head)
{
	if(head==NULL)
	{
		return ;
	}
	mirror(head->left);
	mirror(head->right);
	node *temp = head->left;
	head->left=head->right;
	head->right=temp;
		
}

void inorder(node *head)
{
	if(head==NULL)
		return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct node *root = newnode(1);
	root->left        = newnode(2);
	root->right       = newnode(3);
	root->left->left  = newnode(4);
	root->left->right = newnode(5); 
	   
	printf("\n Inorder traversal of the constructed tree is \n");
	inorder(root);
	   
	mirror(root); 
	cout<<endl;
	printf("\n Inorder traversal of the mirror tree is \n");  
	inorder(root);
    return 0;
}

