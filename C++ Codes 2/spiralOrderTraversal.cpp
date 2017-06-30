#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
}; 


void printSpiral(Node *root)
{
	 deque<Node *>q;
     if(root==NULL)
        return;
     if(root->left!=NULL)
         q.push_back(root->left);
     if(root->right!=NULL)
         q.push_back(root->right);
     int i=1;
     cout<<root->data<<" ";
     while(!q.empty())
     {
         int l=q.size();
         while(l--)
         {
             if(i&1)
             {
                 Node *temp=q.front();
                 cout<<temp->data<<" ";
                 q.pop_front();
                 if(temp->left!=NULL)
                 {
                     q.push_back(temp->left);
                 }
                 if(temp->right!=NULL)
                 {
                     q.push_back(temp->right);
                 }
             }
             else
             {
                 Node *temp=q.back();
                 cout<<temp->data<<" ";
                 q.pop_back();
                 if(temp->left!=NULL)
                 {
                     q.push_back(temp->left);
                 }
                 if(temp->right!=NULL)
                 {
                     q.push_back(temp->right);
                 }
             }
         }
         i++;
     }
}

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct Node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);
    printf("Spiral Order traversal of binary tree is \n");
    printSpiral(root);
    return 0;
}

