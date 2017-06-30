//http://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node structure
struct Node {
    int data;
    Node* left, * right;
}; */

int height(Node *t)
{
    if(t== NULL)
        return 0;
    return 1+max(height(t->left),height(t->right));
}

bool isBalanced(Node *root)
{
    //  Your Code here
    int l,r;
    if(root==NULL)
        return 1;
    l=height(root->left);
    r=height(root->right);
    if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}

