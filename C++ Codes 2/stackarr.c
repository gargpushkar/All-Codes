#include<stdio.h>
#include<stdlib.h>
struct stack {
	int * a;
	int top;
	int maxSize;
};
void initstack(struct stack * p, int maxSize);
void push(struct stack * p, int item);
void display(struct stack p);
int pop(struct stack * p);
void printMenu();

int main()  {
	struct stack p;
	int data,ch, data1, m;
	printf("Enter the maximum size of the stack\n");
	scanf("%d",&m);
	initstack(&p,m);
	do {
	printMenu();	
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch) {
	  case 1:
		printf("Enter the element to be pushed\n");
		scanf("%d",&data);
		push(&p, data);
		break;
	  case 2:
		data1 = pop(&p);
		if(data1 != -1000)
		printf("The popped element is %d\n",data1);
		break;
	  case 3:
		printf("The contents of the stack are");
		display(p);
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
	printf("Choice 1 : Push\n");
	printf("Choice 2 : Pop\n");
	printf("Choice 3 : Display\n");
	printf("Any other choice : Exit\n");
}

void initstack(struct stack * p, int maxSize) {
	//Fill in the code here
	p->a = (int *)malloc(sizeof(int)*maxSize);
	p->maxSize=maxSize;
	p->top=-1;
}

void push(struct stack * p, int item) {
	//Fill in the code here
	p->top+=1;
	if(p->top == p->maxSize)
	{
	    printf("Stack is full\n");
	    p->top--;
	}
	else
	{
	    p->a[p->top]=item;
	}
}

void display(struct stack p) {
	//Fill in the code here	
	int i;
	if(p.top<0)
	{
	    printf(" {}");
	}
	else
	{
	    for(i=0;i<=p.top;i++)
	    {
	        printf(" %d",p.a[i]);
	    }
	}
	
}

int pop(struct stack * p) {
    if(p->top == -1)
    {
        printf("Stack is empty\n");
        return -1000;
    }
    else
    {
        p->top-=1;
        return p->a[p->top+1];
    }
	//Fill in the code here
}
