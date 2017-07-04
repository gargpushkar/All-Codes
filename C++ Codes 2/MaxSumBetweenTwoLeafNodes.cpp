#include <bits/stdc++.h>
using namespace std;

//incorrect
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data)
{
	struct node* nn=new node;
	nn->data=data;
	nn->left=nn->right=NULL;
	return nn;
}

int maxsum=-99999999;

int maxSumBetweenTwoLeafs(struct node* root)
{
	if(root==NULL)
		return 0;
	int lsum = maxSumBetweenTwoLeafs(root->left);
	int rsum = maxSumBetweenTwoLeafs(root->right);
	maxsum = max(maxsum,lsum+rsum+root->data);
	return (max(lsum,rsum) + root->data);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    
    
    struct node *root = NULL;
 
    root = newNode(-15);
    root->left = newNode(5);
    root->right = newNode(6);
    root->left->left = newNode(-8);
    root->left->right = newNode(1);
    root->left->left->left = newNode(2);
    root->left->left->right = newNode(6);
    root->right->left = newNode(3);
    root->right->right = newNode(9);
    root->right->right->right= newNode(0);
    root->right->right->right->left= newNode(4);
    root->right->right->right->right= newNode(-1);
    root->right->right->right->right->left= newNode(10);
	cout<<maxSumBetweenTwoLeafs(root);

    
    
    return 0;
}

