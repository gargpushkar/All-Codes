//http://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1
#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight; 
};

void connect(Node *p)
{
    queue<Node *>q;
    q.push(p);
	while(1)
	{
		int count=q.size();
		if(count==0)
			return;
		while(count>1)
		{
			Node *temp1 = q.front();
			q.pop();
			Node *temp2 = q.front();
			temp1->nextRight=temp2;
			if(temp1->left!=NULL)
				q.push(temp1->left);
			if(temp1->right!=NULL)
				q.push(temp1->right);
			count--;
		}
		Node *temp=q.front();
		temp->nextRight=NULL;
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
	return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

