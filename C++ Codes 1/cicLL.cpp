#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data ;
	struct node * link ;
} ;

void addcirq ( struct node **, struct node **, int ) ;
int delcirq ( struct node **, struct node ** ) ;
void cirq_display ( struct node * ) ;
void printMenu();

int main()
{
	struct node *front = NULL, *rear = NULL ;
	int data,ch, data1;
	do {
	printMenu();
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch) {
	  case 1:
		printf("Enter the element to be inserted/entered\n");
		scanf("%d",&data);
		addcirq(&front,&rear,data);
		break;
	  case 2:
		data1 = delcirq(&front,&rear);
		if(data1 != -1000)
		printf("The deleted element is %d\n",data1);
		break;
	  case 3:
		printf("The contents of the queue are");
		cirq_display ( front ) ;
		printf("\n");
		break;
	  default:
		return 0;
	}
	} while(1);
	return 0;
}

void printMenu()
{
	printf("Choice 1 : Enter element into Queue\n");
	printf("Choice 2 : Delete element from Queue\n");
	printf("Choice 3 : Display\n");
	printf("Any other choice : Exit\n");
}


void addcirq ( struct node **f, struct node **r, int item )
{
 //fill in the code here
 struct node *nn;
 nn=(struct node*)malloc(sizeof(struct node));
 nn->data=item;
 nn->link=NULL;
 if(*f==NULL)
 {
     *f=*r=nn;
     (*f)->link=*f;
     (*r)->link=*r;
 }
 else
 {
     (*r)->link=nn;
     *r=nn;
     (*r)->link = *f;
 }
  }


int delcirq ( struct node **f, struct node **r )
{
  //fill in the code here
  int b;
  if(*f==NULL)
  {
      printf("Queue is empty\n");
      return -1000;
  }
  else if(*f==*r)
  {
      b=(*f)->data;
      (*f)=NULL;
      (*r)=NULL;
      return b;
  }
  else
  {
      b=(*f)->data;
      (*f)=(*f)->link;
      (*r)->link=(*f);
      return b;
  }
}


void cirq_display ( struct node *f )
{
  //fill in the code here
    struct node *t=f;
  if(f==NULL)
  {
      printf(" {}");
  }
  else
  {
      do
      {
          printf(" %d",t->data);
          t=t->link;
      }while(t!=f);
  }
    
}
