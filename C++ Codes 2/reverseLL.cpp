#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void reverse (struct node **);

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
	} while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	printf("The elements in the reversed linked list are");
	reverse(&p);
	display(p);
	printf("\n");
	return 0;
}


void append ( struct node **q, int num ) {
	//Fill in the code here
	struct node * nn,*temp=*q;
	nn=(struct node*)malloc(sizeof(struct node));
	nn->data=num;
	nn->link=NULL;
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

void display ( struct node *q ) {
    while(q->link!=NULL)
    {
        printf(" %d",q->data);
        q=q->link;
    }
    printf(" %d",q->data);
	//Fill in the code here
}

void reverse ( struct node **x ) {
       //Fill in the code here
       struct node *c=NULL;
       struct node *next;
       while((*x)!=NULL)
       {
           next=(*x)->link;
           (*x)->link=c;
           c=(*x);
           *x=next;
       }
       *x=c;
       
}
