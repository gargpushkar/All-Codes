#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *rightc;
	struct node *leftc;
};


void insert(struct node **head,int data)
{
	struct node *nn,*t = *head;
	nn = (struct node*)malloc(sizeof(struct node));
	nn->rightc=NULL;
	nn->leftc=NULL;
	nn->data = data;
	if(*head==NULL)
	{
		*head = nn;
	}
	else
	{
		while(1)
		{
			if(t->data < data)
			{
				if(t->rightc!=NULL)
				{
					t=t->rightc;
				}
				else
				{
					t->rightc=nn;
					return;
				}
			}
			else
			{
				if(t->leftc!=NULL)
				{
					t=t->leftc;
				}
				else
				{
					t->leftc=nn;
					return;
				}
			}
		}
	}
}

int height(struct node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	
	return (1 + max(height(head->leftc),height(head->rightc)));
}
int max(int a, int b)
{
  return (a >= b)? a: b;
}

int main()
{
	int n,i;
	struct node *tree=NULL;
	printf("Enter the number of elements in the tree : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		insert(&tree,a);
	}
	printf("%d",height(tree));
}
