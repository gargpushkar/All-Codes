#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void addafter ( struct node *, int, int ) ;
int count ( struct node * ) ;
void addatbeg(struct node **,int);
void display ( struct node * ) ;
int main() {
	struct node *p ;
	p=NULL;
	int n;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are ");
	display(p);
	printf("\n");
	printf("The number of elements in the linked list is %d\n",count(p));
	return 0;
}

void append ( struct node **q, int num ) {
	//Fill in the code here
	struct node * nn,*temp;
	nn = (struct node *)malloc(sizeof(struct node));
	nn->data=num;
	nn->link=NULL;
	temp=*q;
	if(*q==NULL)
	{
	    *q=nn;
	}
	else
	{
	    while(temp->link!=NULL)
	    {
	        temp=temp->link;
	    }
	    temp->link=nn;
	}
}
void addatbeg ( struct node **q, int num )
{
	//Fill in the code here
	struct node *nn;
	nn = (struct node *)malloc(sizeof(struct node));
	nn->data = num;
	if(*q==NULL)
	{
	    *q=nn;
	}
	else
	{
	    nn->link = *q;
	    *q = nn;
	}
}
void addafter ( struct node *q, int loc, int num ) {
    int count=1;
    struct node *temp=q;
	while(temp->link!=NULL)
	{
	    count++;
	    temp=temp->link;
	}
    if(loc>count)
	{
	    printf("There are less than %d elements in the linked list\n",loc);
	}
	else
	{
	    struct node* nn;
        int a=0;
    	nn=(struct node*)malloc(sizeof(struct node));
    	nn->data=num;
    	count++;
    	if(q==NULL)
    	{
    	    q=nn;
    	}
    	else
    	{
    	    while(a<loc && q->link!=NULL)
    	    {
    	        a++;
    	        q=q->link;
    	    }
    	    nn->link=q->link;
    	    q->link=nn;
    	}
	}
	// Fill in the code here	
}
void display ( struct node *q ) {
	//Fill in the code here
	while(q->link!=NULL)
	{
	    printf("%d ",q->data);
	    q=q->link;
	}
	printf("%d",q->data);
}
void delete ( struct node **q, int num ) {
	// Fill in the code here
	struct node *temp;int b=0;
	temp = *q;
	if(*q==NULL)
	{
	    printf("Element %d not found\n", num);
	}
	else
	{   
	    
	    if(temp->data==num)
	    {
            b=1;
            temp=temp->link;
            *q=temp;
	    }
	    else 
	    {
	    while(temp->link!=NULL)
	    {
	        if(temp->link->data == num)
	        {
	            temp->link=temp->link->link;
	            b=1;
	            break;
	        }
	        temp=temp->link;
	    }
	    if(b==0)
        	printf ( "Element %d not found\n", num ) ;
	    }
	}
}

int count ( struct node * q ) {
    int c=1;
    while(q->link!=NULL)
    {
        c++;
        q=q->link;
    }
    return c;
	//Fill in the code here
}
