void levelorder(node *root)
{
	node *temp=root;
	queue<node *>q;
	q.push_back(root->data);
	map<node *,int>m;
	m[*root]=1;
	
	while(!q.isempty())
	{
		
	}
	int c=0;
	while(temp!=NULL)
	{
		if(c==0)
		{
			if(temp->link!=NULL)
			{
				c+=1;
				cout<<temp->data;
			}
			
		}
	}
}
