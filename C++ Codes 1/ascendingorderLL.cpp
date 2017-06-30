#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void insert ( struct node **, int ) ;
void display ( struct node * ) ;


int main() {
	struct node *p ;
	p=NULL;
	int n;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		insert(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	} while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	return 0;
}


void insert ( struct node **q, int num ) {
	// Fill in the code here
	struct node*nn,*temp; int a=0;
	nn=(struct node*)malloc(sizeof(struct node *));
	temp = *q;
	nn->data=num;
	if(*q==NULL)
	{
	    nn->link=NULL;
	    *q=nn;
	}
	else
	{
	    if(temp->data >= num)
        {
            nn->link=*q;
            *q=nn;
        }
        else
        {
	    while(temp->link!=NULL)
	    {
	        if(temp->link->data >=num)
	        {
	            nn->link = temp->link;
    	        temp->link = nn;
    	        a=1;
    	        break;
	        }
	        else
	        {
	            temp=temp->link;
	        }
	    }
	    if(a!=1)
	    temp->link=nn;
        }
	}
}

void display ( struct node *q ) {
	// Fill in the code here
	while(q->link!=NULL)
	{
	    printf(" %d",q->data);
	    q=q->link;
	}
	printf(" %d",q->data);
}
